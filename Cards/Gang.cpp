//
// Created by Adi Tsach on 06/04/2022.
//


#include <fstream>
#include "Gang.h"
#include "utilities.h"
#include <iostream>
#include "Players/Player.h"


#include "Cards/Dragon.h"
#include "Cards/Vampire.h"
#include "Cards/Goblin.h"
#include "Cards/Barfight.h"
#include "Cards/Treasure.h"
#include "Cards/Merchant.h"
#include "Cards/Fairy.h"
#include "Cards/Pitfall.h"
#include "Cards/Gang.h"

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
            m_theGang.push_back(std::make_unique<Dragon>());
            deckLine++;
        }
        else if (tempCard == Vampire::TYPE)
        {
            m_theGang.push_back(std::make_unique<Vampire>());
            deckLine++;
        }
        else if (tempCard == Goblin::TYPE)
        {
            m_theGang.push_back(std::make_unique<Goblin>());
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
            return;
        }
        else
        {
            throw DeckFileFormatError(deckLine);
        }
    }
    throw DeckFileFormatError(deckLine);
}



void Gang::applyEncounter(Player& player) const {
    int size = m_theGang.size();
    int level = player.getLevel();
    for (int i = 0; i < size ; i++)
    {
        m_theGang[i]->applyEncounter(player);
        if (level == player.getLevel())
        {
            this->applyDamage(player, i + 1);
            return;
        }
        player.levelDown();
    }
    player.levelUp();
}


void Gang::applyDamage(Player& player, int currentMonster) const {
    int size = m_theGang.size();
    player.weak(Gang::DEFEATED);
    for (int i = currentMonster; i < size ; i++)
    {
        m_theGang[i]->applyEncounter(player);
    }
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


