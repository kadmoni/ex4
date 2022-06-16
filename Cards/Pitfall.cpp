//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Pitfall.h"
#include "Player.h"
#include "Rogue.h"
////^^^^^^ more
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;


Pitfall::Pitfall() : Card(),
    m_name("Pitfall"),
    m_damage(10)
{}

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

