#include "Player.hpp"

Player::Player(string player_name)
    :name(player_name),
    money(1000),
    position(0),
    in_jail(false)
    
{
}

Player::~Player(void)
{
}
