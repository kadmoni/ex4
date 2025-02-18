
#include <fstream>
#include "Gang.h"
#include "../utilities.h"
#include <iostream>


#include "Dragon.h"
#include "Vampire.h"
#include "Goblin.h"
#include "Barfight.h"
#include "Treasure.h"
#include "Merchant.h"
#include "Fairy.h"
#include "Pitfall.h"
#include "Card.h"
#include "../Players/Player.h"

using std::cout;
using std::endl;

const std::string Gang::TYPE = "Gang";
const std::string Gang::END = "EndGang";


Gang::Gang(std::ifstream& deck, int& deckLine) : Card()
{
    std::string tempCard;
    while (std::getline(deck,tempCard))
    {
        if (tempCard == Dragon::TYPE)
        {
            m_theGang.push_back(std::unique_ptr<Card>(new Dragon()));
            deckLine++;
        }
        else if (tempCard == Vampire::TYPE)
        {
            m_theGang.push_back(std::unique_ptr<Card>(new Vampire()));
            deckLine++;
        }
        else if (tempCard == Goblin::TYPE)
        {
            m_theGang.push_back(std::unique_ptr<Card>(new Goblin()));
            deckLine++;
        }
        else if (tempCard == Barfight::TYPE)
        {
            throw DeckFileFormatError(deckLine);
        }
        else if (tempCard == Pitfall::TYPE)
        {
            throw DeckFileFormatError(deckLine);
        }
        else if (tempCard == Fairy::TYPE)
        {
            throw DeckFileFormatError(deckLine);
        }
        else if (tempCard == Merchant::TYPE)
        {
            throw DeckFileFormatError(deckLine);
        }
        else if (tempCard == Treasure::TYPE)
        {
            throw DeckFileFormatError(deckLine);
        }
        else if (tempCard == Gang::END)
        {
            deckLine++;
            return;
        }
        else
        {
            throw DeckFileFormatError(deckLine);
        }
    }
    throw DeckFileFormatError(deckLine);
}

Gang::Gang(const Gang& otherGang)
{
    int gangSize = otherGang.m_theGang.size();
    for (int i = 0; i < gangSize; i++)
    {
        Dragon* ptrDragon = dynamic_cast<Dragon*>(&(*(m_theGang[i])));
        Goblin* ptrGoblin = dynamic_cast<Goblin*>(&(*(m_theGang[i])));
        Vampire* ptrVampire = dynamic_cast<Vampire*>(&(*(m_theGang[i])));
        if (ptrDragon != nullptr)
        {
            this->m_theGang.push_back(std::unique_ptr<Card>(new Dragon));
        }
        else if (ptrGoblin != nullptr)
        {
            this->m_theGang.push_back(std::unique_ptr<Card>(new Goblin));
        }
        else if (ptrVampire != nullptr)
        {
            this->m_theGang.push_back(std::unique_ptr<Card>(new Vampire));
        }
    }
}


Gang& Gang::operator=(const Gang& otherGang)
{
    if (this == &otherGang)
    {
        return *this;
    }
    int gangSize = this->m_theGang.size();
    for (int i = 0; i <gangSize; i++)
    {
        this->m_theGang.erase(this->m_theGang.begin() + i);
    }
    gangSize = otherGang.m_theGang.size();
    for (int i = 0; i < gangSize; i++)
    {
        Dragon* ptrDragon = dynamic_cast<Dragon*>(&(*(m_theGang[i])));
        Goblin* ptrGoblin = dynamic_cast<Goblin*>(&(*(m_theGang[i])));
        Vampire* ptrVampire = dynamic_cast<Vampire*>(&(*(m_theGang[i])));
        if (ptrDragon != nullptr)
        {
            this->m_theGang.push_back(std::unique_ptr<Card>(new Dragon));
        }
        else if (ptrGoblin != nullptr)
        {
            this->m_theGang.push_back(std::unique_ptr<Card>(new Goblin));
        }
        else if (ptrVampire != nullptr)
        {
            this->m_theGang.push_back(std::unique_ptr<Card>(new Vampire));
        }
    }
    return *this;
}



void Gang::applyEncounter(Player& player) const {
    int size = m_theGang.size();
    int level = player.getLevel();
    std::streambuf* oldCoutStreamBuf = cout.rdbuf();
    for (int i = 0; i < size ; i++)
    {
        std::ostringstream strCout;
        cout.rdbuf( strCout.rdbuf() );
        m_theGang[i]->applyEncounter(player);
        if (level == player.getLevel())
        {
            cout.rdbuf( oldCoutStreamBuf );
            cout << strCout.str();
            this->applyDamage(player, i + 1);
            return;
        }
        player.levelDown();
    }
    cout.rdbuf( oldCoutStreamBuf );
    printWinBattle(player.getName(),Gang::TYPE);
    player.levelUp();
}


void Gang::applyDamage(Player& player, int currentMonster) const {
    int size = m_theGang.size();
    int ogForce = player.getForce();
    player.forceChange(Gang::DEFEATED);
    for (int i = currentMonster; i < size ; i++)
    {
        m_theGang[i]->applyEncounter(player);
    }
    int changeInForce = Gang::DEFEATED - player.getForce();
    player.forceChange(ogForce - changeInForce);
}


std::ostream& Gang::print(std::ostream &out) const
{
    out << "You have encountered a gang of monsters, watch out!" << endl;
    out << "-------------------------------------------" << endl;
    int size = m_theGang.size();
    for (int i = 0; i < size ; i++)
    {
        m_theGang[i]->print(cout);
    }
    out << "The battle has ended all blood has been shed" << endl;
    return out;
}


