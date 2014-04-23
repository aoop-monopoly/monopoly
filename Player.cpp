#include "Player.hpp"

Player::Player()
{
}

Player::Player(string player_name)
    :m_name(player_name),
    m_money(1000),
    m_position(0),
    m_in_jail(false)
    
{
}

Player::~Player(void)
{
}

void
Player::spend(int money)
{
    m_money -= money;
}

void
Player::earn(int money)
{
    m_money += money;
}


