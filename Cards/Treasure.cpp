//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Treasure.h"
#include "Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;


Treasure::Treasure() : Card(),
    m_name("Treasure"),
    m_loot(10)
{}

Card* Treasure::clone() const
{
    return new Treasure(*this);
}

void Treasure::applyEncounter(Player& player) const {
    player.addCoins(m_loot);
    printTreasureMessage();
}


std::ostream& Treasure::print(std::ostream &out) const
{
    printCardDetails(out,m_name);
    printEndOfCardDetails(out);
    return out;
}

