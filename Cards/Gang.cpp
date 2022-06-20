//
// Created by Adi Tsach on 06/04/2022.
//



#include "Gang.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;

const std::string Gang::TYPE = "Gang";
const std::string Gang::END= "EndGang";


Gang::Gang(std::ifstream& deck, int& deckLine) : Card()
{
    std::string tempCard;

    while (std::getline(deck,tempCard))
    {
        if (tempCard == Dragon::TYPE)
        {
            m_theGang.push(std::make_unique<Dragon>());
            deckLine++;
        }
        else if (tempCard == Vampire::TYPE)
        {
            m_theGang.push(std::make_unique<Vampire>());
            deckLine++;
        }
        else if (tempCard == Goblin::TYPE)
        {
            m_theGang.push(std::make_unique<Goblin>());
            deckLine++;
        }
        else if (tempCard == Barfight::TYPE)
        {
            deckLine++;
            throw DeckFileFormatError(deckLine);
        }
        else if (tempCard == Pitfall::TYPE)
        {
            m_theGang.push(std::make_unique<Pitfall>());
            deckLine++;
        }
        else if (tempCard == Fairy::TYPE)
        {
            m_theGang.push(std::make_unique<Fairy>());
            deckLine++;
        }
        else if (tempCard == Merchant::TYPE)
        {
            m_theGang.push(std::make_unique<Merchant>());
            deckLine++;
        }
        else if (tempCard == Treasure::TYPE)
        {
            m_theGang.push(std::make_unique<Treasure>());
            deckLine++;
        }
        else if (tempCard == Gang::END)
        {
            m_theGang.push(std::make_unique<Treasure>());
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


Card* Gang::clone() const
{
    return new Gang(*this);
}

void Gang::applyEncounter(Player& player) const {
    bool win = player.getAttackStrength() >= m_force;
    if (win)
    {
        player.levelUp();
        player.addCoins(m_loot);
        printWinBattle(player.getName(), Gang::TYPE);

    }
    else
    {
        player.damage(m_damage);
        printLossBattle(player.getName(), Gang::TYPE);

    }
}


std::ostream& Gang::print(std::ostream &out) const
{
    printCardDetails(out,Gang::TYPE);
    printMonsterDetails(out, m_force, m_damage, m_loot, false);
    printEndOfCardDetails(out);
    return out;
}

