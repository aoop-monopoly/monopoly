#include "Player.hpp"

Player::Player()
    :m_name("Bank"),
    m_money(100000),
    m_position(0),
    m_in_jail(false),
    m_player_type(bank)
{
}

Player::Player(string player_name)
    :m_name(player_name),
    m_money(1000),
    m_position(0),
    m_in_jail(false),
    m_player_type(player)
    
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

PlayerType 
Player::getPlayerType()
{
    return m_player_type;
}


