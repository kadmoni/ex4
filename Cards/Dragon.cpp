//
// Created by Adi Tsach on 06/04/2022.
//


//#include "Card.h"
#include "Dragon.h"
//#include "Players/Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;

const std::string Dragon::TYPE = "Dragon";


Dragon::Dragon() : Card(),
    m_force(25),
    m_loot(1000)
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
        printWinBattle(player.getName(), Dragon::TYPE);

    }
    else
    {
        int damage = player.getHp();
        player.damage(damage);
        printLossBattle(player.getName(), Dragon::TYPE);
    }
}


std::ostream& Dragon::print(std::ostream &out) const
{
    printCardDetails(out,Dragon::TYPE);
    printMonsterDetails(out, m_force, 0, m_loot, true);
    printEndOfCardDetails(out);
    return out;
}



