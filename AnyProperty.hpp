#pragma once
#include "Player.hpp"

class AnyProperty 
{
public:
    int getPosition();
    void buy(Player buyer);
    void trade(Player buyer, Player seller);
    void mortgage();
    void unMortgage();
    
    virtual int rent() = 0;
    virtual void buildHouse(int amount) = 0;
    virtual void buildHotel() = 0;
    virtual void sellHouse(int amount) = 0;
    virtual void sellHotel() = 0;

private:
    Player owner;
    bool mortgaged;
    int houses;
    int hotel;
    int monopoly;
    int position;
    int price;
};

