
#include "Player.h"
#include "utilities.h"
#include <string>

Player::Player(std::string playerName, int maxHp, int force): m_name(playerName),
m_maxHp(maxHp),m_hp(m_maxHp),m_force(force), m_level(IN_LEVEL),m_coins(IN_COINS)
{
    if (m_hp <= 0)
    {
        m_hp = IN_HP;
        m_maxHp = IN_HP;
    }
    if (m_force <= 0)
    {
        m_force = IN_FORCE;
    }
}

//void Player::printInfo() const
//{
//    printPlayerInfo(m_name.c_str(),m_level,m_force,m_hp,m_coins);
//}

void Player::levelUp()
{
    if (m_level < 10)
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

void Player::debuff(int amount)
{
    if (amount > 0)
    {
        m_force -= amount;
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

//std::ostream &Player::print(std::ostream &out) {
//    int hello;
//}


