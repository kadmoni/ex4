
#include "Goblin.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;

const std::string Goblin::TYPE = "Goblin";


Goblin::Goblin() : Card(),
    m_force(6),
    m_loot(2),
    m_damage(10)
{}


void Goblin::applyEncounter(Player& player) const {
    bool win = player.getAttackStrength() >= m_force;
    if (win)
    {
        player.levelUp();
        player.addCoins(m_loot);
        printWinBattle(player.getName(), Goblin::TYPE);

    }
    else
    {
        player.damage(m_damage);
        printLossBattle(player.getName(), Goblin::TYPE);

    }
}


std::ostream& Goblin::print(std::ostream &out) const
{
    printCardDetails(out,Goblin::TYPE);
    printMonsterDetails(out, m_force, m_damage, m_loot, false);
    printEndOfCardDetails(out);
    return out;
}
