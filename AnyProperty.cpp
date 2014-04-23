#include "AnyProperty.hpp"


int
AnyProperty::getPosition()
{
    return position;
}

void
AnyProperty::buy(Player buyer)
{
    owner = buyer;
    buyer.spend(price);
}

void 
AnyProperty::trade(Player buyer, Player seller)
{
    owner = buyer;
    buyer.spend(price);
    seller.earn(price);
}

void
AnyProperty::mortgage()
{
    mortgaged = true;
    owner.earn(price/2);
}

void
AnyProperty::unMortgage()
{
    mortgaged = false;
    owner.spend(price/2);
}


