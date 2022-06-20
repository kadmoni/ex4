//
// Created by Adi Tsach on 06/04/2022.
//




#include "Barfight.h"
#include "Players/Fighter.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;

const std::string Barfight::TYPE = "Barfight";


Barfight::Barfight() : Card(),
    m_damage(10)
{}



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
    printCardDetails(out,Barfight::TYPE);
    printEndOfCardDetails(out);
    return out;
}

