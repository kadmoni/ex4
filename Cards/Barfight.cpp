

#include "Barfight.h"
#include "../Players/Fighter.h"
#include "../utilities.h"
#include <iostream>
#include "Card.h"
#include "../Players/Player.h"
using std::cout;
using std::endl;

const std::string Barfight::TYPE = "Barfight";


Barfight::Barfight() : Card(),
    m_damage(Barfight::barDamage)
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

