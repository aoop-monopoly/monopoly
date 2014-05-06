#include "Player.hpp"

Player::Player()
    :m_name("Bank"),
    m_id(0),
    m_money(100000),
    m_position(0),
    m_in_jail(false),
    m_player_type(bank)
{
}

Player::Player(string player_name, int player_id)
    :m_name(player_name),
    m_id(player_id),
    m_money(1000),
    m_position(0),
    m_in_jail(false),
    m_player_type(player)
    
{
}

Player::~Player(void)
{
}

int
Player::getId()
{
    return m_id;
}

int
Player::getMoney()
{
    return m_money;
}

void
Player::setPosition(int new_position)
{
    m_position = new_position;
}

int
Player::getPosition()
{
    return m_money;
}

string
Player::getName()
{
    return m_name;
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


