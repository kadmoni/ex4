//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Goblin.h"
#include "Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;


Goblin::Goblin(std::string m_name, int m_force, int m_loot, int m_damage) : Card()
{}


Card* Goblin::clone() const
{
    return new Goblin(*this);
}

void Goblin::applyEncounter(Player& player) const {
    bool win = player.getAttackStrength() >= m_force;
    if (win)
    {
        player.levelUp();
        player.addCoins(m_loot);
        printWinBattle(player.getName(), m_name);

    }
    else
    {
        player.damage(m_damage);
        printLossBattle(player.getName(), m_name);

    }
}


std::ostream& Goblin::print(std::ostream &out) const
{
    printCardDetails(out,m_name);
    printMonsterDetails(out, m_force, m_damage, m_loot, false);
    printEndOfCardDetails(out);
    return out;
}
