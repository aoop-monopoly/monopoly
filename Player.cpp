#include "Player.hpp"

Player::Player()
    :m_name("Bank"),
    m_id(0),
    m_money(100000),
    m_position(0),
    m_in_jail(false),
    m_jail_free_card(false),
    m_houses(0),
    m_hotels(0),
    m_player_type(bank)
{
}

Player::Player(string player_name, int player_id)
    :m_name(player_name),
    m_id(player_id),
    m_money(1000),
    m_position(0),
    m_in_jail(false),
    m_jail_free_card(false),
    m_houses(0),
    m_hotels(0),
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
    return m_position;
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

void
Player::setJailFreeCard(bool free)
{
    m_jail_free_card = free;
}

bool
Player::getJailFreeCard()
{
    return m_jail_free_card;
}

void
Player::buildHouse()
{
    m_houses++;
}

int
Player::getHouses()
{
    return m_houses;
}

void
Player::buildHotel()
{
    m_hotels++;
}

int
Player::getHotels()
{
    return m_hotels;
}


