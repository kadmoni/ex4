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

Barfight::Barfight() : Card()
{}


Card* Barfight::clone() const
{
    return new Barfight(*this);
}


void Barfight::applyEncounter(Player& player) const {
    Fighter* ptr = dynamic_cast<Fighter*>(&player);
    bool isFighter = ptr != nullptr;
    if (!isFighter) {
        player.damage(m_damage);
    }
    printBarfightMessage(isFighter);
}

std::ostream& Barfight::print(std::ostream &out) const
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
