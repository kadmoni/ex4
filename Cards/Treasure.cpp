
#include "Treasure.h"
#include "utilities.h"
#include <iostream>
#include "Card.h"
#include "../Players/Player.h"

using std::cout;
using std::endl;

const std::string Treasure::TYPE = "Treasure";


Treasure::Treasure() : Card(),
    m_loot(Treasure::defLootAmout)
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

