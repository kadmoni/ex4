
#include "Player.h"
#include "../utilities.h"
#include <string>

Player::Player(std::string playerName, int maxHp, int force): m_name(playerName),
m_maxHp(maxHp),m_hp(m_maxHp),m_force(force), m_level(inLevel),m_coins(inCoins)
{
    if (m_hp <= 0)
    {
        m_hp = inHp;
        m_maxHp = inHp;
    }
    if (m_force <= 0)
    {
        m_force = inForce;
    }
}

void Player::levelUp()
{
    if (m_level < Player::maxLevel)
    {
        m_level++;
    }
}

int Player::getLevel() const
{
    return m_level;
}

int Player::getHp() const
{
    return m_hp;
}

std::string Player::getName() const
{
    return m_name;
}

int Player::getCoins() const
{
    return m_coins;
}

void Player::buff(int amount)
{
    if (amount > 0)
    {
        m_force += amount;
    }
}

void Player::forceChange(int amount)
{
    m_force = amount;
}



void Player::debuff(int amount)
{
    if ((m_force > 0)||(m_force < 0))
    {
        m_force -= amount;
    }
    if (m_force== 0)
    {
        m_force = 0;
    }
}

void Player::heal(int amount)
{
    if (amount > 0)
    {
        m_hp += amount;
        if (m_hp > m_maxHp)
        {
            m_hp = m_maxHp;
        }
    }
}

void Player::damage(int amount)
{
    if (amount > 0)
    {
        m_hp -= amount;
        if (m_hp < 0)
        {
            m_hp = 0;
        }
    }
}

std::ostream& operator<<(std::ostream &out, const Player& player)
{
    player.print(out);
    return out;
}

bool Player::isKnockedOut() const
{
    if (m_hp == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Player::addCoins(int amount)
{
    if (amount > 0)
    {
        m_coins += amount;
    }
}

bool Player::pay(int amount)
{
    if (m_coins >= amount)
    {
        m_coins -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

int Player::getAttackStrength() const
{
    return m_force+m_level;
}

int Player::getForce() const
{
    return m_force;
}

void Player::levelDown() {
    m_level--;
}

