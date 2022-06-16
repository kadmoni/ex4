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


Pitfall::Pitfall() : card() {}

Card* Pitfall::clone() const
{
    return new Pitfall(*this);
}

void Pitfall::applyEncounter(Player& player) const {
    Rogue* ptr = dynamic_cast<Rogue*>(&player);
    bool isRogue = ptr != nullptr;
    if (!isRogue) {
        player.damage(m_damage);
    }
    printPitfallMessage(isRogue);
}


std::ostream& Pitfall::print(std::ostream &out) const
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
