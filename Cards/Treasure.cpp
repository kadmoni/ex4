//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;
void negativeCheck(int& a);


Treasure::Treasure() : card()
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


void negativeCheck(int& a) {
    if (a < 0)
    {
        a = 0;
    }
}
