
#include "Vampire.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;

const std::string Vampire::TYPE = "Vampire";

Vampire::Vampire() : Card(),
    m_force(Vampire::vampForce),
    m_loot(Vampire::vampLoot),
    m_damage(Vampire::vampDamage),
    m_debuff(Vampire::vampDebuff)
{}



void Vampire::applyEncounter(Player& player) const {
    bool win = player.getAttackStrength() >= m_force;
    if (win)
    {
        player.levelUp();
        player.addCoins(m_loot);
        printWinBattle(player.getName(), Vampire::TYPE);
    }
    else
    {
        player.damage(m_damage);
        player.debuff(m_debuff);
        printLossBattle(player.getName(), Vampire::TYPE);
    }
}


void Vampire::gangEncounter(Player& player) const {
    bool win = player.getAttackStrength() >= m_force;
    if (win)
    {
        player.levelUp();
        player.addCoins(m_loot);
    }
    else
    {
        player.damage(m_damage);
        player.debuff(m_debuff);
        printLossBattle(player.getName(), Vampire::TYPE);
    }
}




std::ostream& Vampire::print(std::ostream &out) const
{
    printCardDetails(out,Vampire::TYPE);
    printMonsterDetails(out, m_force, m_damage, m_loot, false);
    printEndOfCardDetails(out);
    return out;
}



