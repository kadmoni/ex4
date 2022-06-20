
#include "Treasure.h"
#include "utilities.h"
#include <iostream>

using std::cout;
using std::endl;

const std::string Treasure::TYPE = "Treasure";


Treasure::Treasure() : Card(),
    m_loot(10)
{}


void Treasure::applyEncounter(Player& player) const {
    player.addCoins(m_loot);
    printTreasureMessage();
}


std::ostream& Treasure::print(std::ostream &out) const
{
    printCardDetails(out,Treasure::TYPE);
    printEndOfCardDetails(out);
    return out;
}

