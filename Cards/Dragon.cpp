//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Dragon.h"
#include "Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;


Dragon::Dragon(std::string m_name, int m_force, int m_loot) : Card()
{}

Card* Dragon::clone() const
{
    return new Dragon(*this);
}

void Dragon::applyEncounter(Player& player) const {
    bool win = player.getAttackStrength() >= m_force;
    if (win)
    {
        player.levelUp();
        player.addCoins(m_loot);
        printWinBattle(player.getName(), m_name);

    }
    else
    {
        int damage = player.getHp();
        player.damage(damage);
        printLossBattle(player.getName(), m_name);
    }
}


std::ostream& Dragon::print(std::ostream &out) const
{
    printCardDetails(out,m_name);
    printMonsterDetails(out, m_force, 0, m_loot, true);
    printEndOfCardDetails(out);
    return out;
}



