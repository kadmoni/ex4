
#include "Pitfall.h"
#include "Players/Rogue.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;

const std::string Pitfall::TYPE = "Pitfall";


Pitfall::Pitfall() : Card(),
    m_damage(Pitfall::defPitDamage)
{}


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
    printCardDetails(out,Pitfall::TYPE);
    printEndOfCardDetails(out);
    return out;
}

