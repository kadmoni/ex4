//
// Created by Adi Tsach on 06/04/2022.
//


//#include "Card.h"
#include "Vampire.h"
//#include "Players/Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;

const std::string Vampire::TYPE = "Vampire";

Vampire::Vampire() : Card(),
    m_force(10),
    m_loot(2),
    m_damage(10),
    m_debuff(1)
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
        printWinBattle(player.getName(), Vampire::TYPE);
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



