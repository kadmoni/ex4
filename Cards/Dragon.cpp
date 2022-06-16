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


Dragon::Dragon() : Card()
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
    printMonsterDetails(out, m_force, 0, m_loot, 1);
    printEndOfCardDetails(out);
    return out;
}



void negativeCheck(int& a) {
    if (a < 0)
    {
        a = 0;
    }
}
