
#include "Dragon.h"
#include "../utilities.h"
#include <iostream>
#include "Card.h"
#include "../Players/Player.h"
using std::cout;
using std::endl;

const std::string Dragon::TYPE = "Dragon";


Dragon::Dragon() : Card(),
    m_force(Dragon::dragForce),
    m_loot(Dragon::dragLoot)
{}


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



