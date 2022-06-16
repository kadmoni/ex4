//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Barfight.h"
#include "Player.h"
#include "Fighter.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;

Barfight::Barfight() : Card(),
    m_name("Barfight"),
    m_damage(10)
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

