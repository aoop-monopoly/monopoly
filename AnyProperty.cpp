#include "AnyProperty.hpp"

#include <iostream>

using  namespace std;

AnyProperty::AnyProperty(int position, int price, int build_cost, 
                            int morgage_value, int base_rent, int one_house_rent, 
                            int two_house_rent, int three_house_rent, int four_house_rent, int hotel_rent)
    :m_owned_all_colors(false),
    m_mortgaged(false),
    m_houses(0),
    m_hotel(0),
    m_position(position),
    m_price(price),
    m_build_cost(build_cost),
    m_morgage_value(morgage_value),
    m_base_rent(base_rent),
    m_one_house_rent(one_house_rent),
    m_two_house_rent(two_house_rent),
    m_three_house_rent(three_house_rent),
    m_four_house_rent(four_house_rent),
    m_hotel_rent(hotel_rent)
{
    m_owner = new Player();
}

AnyProperty::AnyProperty(int position, int price, int morgage_value, int base_rent)
    :m_owned_all_colors(false),
    m_mortgaged(false),
    m_houses(0),
    m_hotel(0),
    m_position(position),
    m_price(price),
    m_build_cost(0),
    m_morgage_value(morgage_value),
    m_base_rent(base_rent),
    m_one_house_rent(0),
    m_two_house_rent(0),
    m_three_house_rent(0),
    m_four_house_rent(0),
    m_hotel_rent(0)
{
    m_owner = new Player();
}


AnyProperty::~AnyProperty(void)
{
}


int
AnyProperty::getPosition()
{
    return m_position;
}

void
AnyProperty:: payRent(Player &renter)
{
    int rent_price = rent();
    renter.spend(rent_price);
    m_owner->earn(rent_price);
}

void 
AnyProperty::trade(Player &buyer, Player &seller)
{
    m_owner = &buyer;
    buyer.spend(m_price);
    seller.earn(m_price);
}

void
AnyProperty::mortgage()
{
    m_mortgaged = true;
    m_owner->earn(m_price/2);
}

void
AnyProperty::unMortgage()
{
    m_mortgaged = false;
    m_owner->spend(m_price/2);
}

int
AnyProperty::getHouses()
{
    return m_houses;
}

int
AnyProperty::getHotel()
{
    return m_hotel;
}

int
AnyProperty::houseCost()
{
    return m_build_cost;
}

int
AnyProperty::hotelCost()
{
    return m_build_cost * 5;
}

int
AnyProperty::mortgageValue()
{
    return m_morgage_value;
}

void
AnyProperty::buildHouse()
{
    m_houses++;
    m_owner->spend(m_build_cost);
    m_owner->buildHouse();
}

void
AnyProperty::buildHotel()
{
    m_hotel = 1;
    m_owner->spend(m_build_cost * 5);
    m_owner->buildHotel();
}

Player*
AnyProperty::getOwner()
{
    return m_owner;
}

bool
AnyProperty::ownColorGroup()
{
    return m_owned_all_colors;
}

int
AnyProperty::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = m_base_rent;

    if (m_hotel == 1) 
    {
        rent = m_hotel_rent;
    }
    else if (m_houses == 1) 
    {
        rent = m_one_house_rent;
    }
    else if (m_houses == 2) 
    {
        rent = m_three_house_rent;
    }
    else if (m_houses == 3) 
    {
        rent = m_three_house_rent;
    }
    else if (m_houses == 4) 
    {
        rent = m_four_house_rent;
    }
    else if (m_owned_all_colors == true) 
    {
        rent *= 2;
    }

    return rent;
}

