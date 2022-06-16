//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Vampire.h"
#include "Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;


Vampire::Vampire(std::string m_name, int m_force, int m_loot, int m_damage, int m_debuff) : Card()
{}


Card* Vampire::clone() const
{
    return new Vampire(*this);
}


void Vampire::applyEncounter(Player& player) const {
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
        player.debuff(m_debuff);
        printLossBattle(player.getName(), m_name);
    }
    
}


std::ostream& Vampire::print(std::ostream &out) const
{
    printCardDetails(out,m_name);
    printMonsterDetails(out, m_force, m_damage, m_loot, false);
    printEndOfCardDetails(out);
    return out;
}



