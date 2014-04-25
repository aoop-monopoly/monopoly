#include "AnyProperty.hpp"

AnyProperty::AnyProperty()
    :m_owned_all_colors(false),
    m_mortgaged(false)
{
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
AnyProperty::buy(Player buyer)
{
    m_owner = buyer;
    buyer.spend(m_price);
}

void 
AnyProperty::trade(Player buyer, Player seller)
{
    m_owner = buyer;
    buyer.spend(m_price);
    seller.earn(m_price);
}

void
AnyProperty::mortgage()
{
    m_mortgaged = true;
    m_owner.earn(m_price/2);
}

void
AnyProperty::unMortgage()
{
    m_mortgaged = false;
    m_owner.spend(m_price/2);
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

//OldKentRoad
OldKentRoad::OldKentRoad()
{
    m_position = 1;
    m_price = 60;
    m_build_cost = 30;
    m_morgage_value = 50;
}

OldKentRoad::~OldKentRoad(void)
{
}

int
OldKentRoad::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 2;

    if (m_hotel == 1) 
    {
        rent = 250;
    }
    else if (m_houses == 1) 
    {
        rent = 10;
    }
    else if (m_houses == 2) 
    {
        rent = 30;
    }
    else if (m_houses == 3) 
    {
        rent = 90;
    }
    else if (m_houses == 4) 
    {
        rent = 160;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}


//WhitechapelRoad
WhitechapelRoad::WhitechapelRoad()
{
    m_position = 3;
    m_price = 60;
    m_build_cost = 30;
    m_morgage_value = 50;   
}

WhitechapelRoad::~WhitechapelRoad(void)
{
}

int
WhitechapelRoad::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 4;

    if (m_hotel == 1) 
    {
        rent = 450;
    }
    else if (m_houses == 1) 
    {
        rent = 20;
    }
    else if (m_houses == 2) 
    {
        rent = 60;
    }
    else if (m_houses == 3) 
    {
        rent = 180;
    }
    else if (m_houses == 4) 
    {
        rent = 360;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//TheAngelIslington
TheAngelIslington::TheAngelIslington()
{
    m_position = 6;
    m_price = 100;
    m_build_cost = 50;
    m_morgage_value = 50;
}

TheAngelIslington::~TheAngelIslington(void)
{
}

int
TheAngelIslington::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 6;

    if (m_hotel == 1) 
    {
        rent = 550;
    }
    else if (m_houses == 1) 
    {
        rent = 30;
    }
    else if (m_houses == 2) 
    {
        rent = 90;
    }
    else if (m_houses == 3) 
    {
        rent = 270;
    }
    else if (m_houses == 4) 
    {
        rent = 400;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}


//EustonRoad
EustonRoad::EustonRoad()
{
    m_position = 8;
    m_price = 100;
    m_build_cost = 50;
    m_morgage_value = 50;
}

EustonRoad::~EustonRoad(void)
{
}

int
EustonRoad::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 6;

    if (m_hotel == 1) 
    {
        rent = 550;
    }
    else if (m_houses == 1) 
    {
        rent = 30;
    }
    else if (m_houses == 2) 
    {
        rent = 90;
    }
    else if (m_houses == 3) 
    {
        rent = 270;
    }
    else if (m_houses == 4) 
    {
        rent = 400;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//PentonvilleRoad
PentonvilleRoad::PentonvilleRoad()
{
    m_position = 9;
    m_price = 120;
    m_build_cost = 50;
    m_morgage_value = 60;
}

PentonvilleRoad::~PentonvilleRoad(void)
{
}

int
PentonvilleRoad::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 8;

    if (m_hotel == 1) 
    {
        rent = 600;
    }
    else if (m_houses == 1) 
    {
        rent = 40;
    }
    else if (m_houses == 2) 
    {
        rent = 100;
    }
    else if (m_houses == 3) 
    {
        rent = 300;
    }
    else if (m_houses == 4) 
    {
        rent = 450;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//PallMall
PallMall::PallMall()
{
    m_position = 11;
    m_price = 140;
    m_build_cost = 100;
    m_morgage_value = 70;
}

PallMall::~PallMall()
{
}

int
PallMall::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 10;

    if (m_hotel == 1) 
    {
        rent = 750;
    }
    else if (m_houses == 1) 
    {
        rent = 50;
    }
    else if (m_houses == 2) 
    {
        rent = 150;
    }
    else if (m_houses == 3) 
    {
        rent = 450;
    }
    else if (m_houses == 4) 
    {
        rent = 625;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//Whitehall
Whitehall::Whitehall()
{
    m_position = 13;
    m_price = 140;
    m_build_cost = 100;
    m_morgage_value = 70;
}

Whitehall::~Whitehall()
{
}

int
Whitehall::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 10;

    if (m_hotel == 1) 
    {
        rent = 750;
    }
    else if (m_houses == 1) 
    {
        rent = 50;
    }
    else if (m_houses == 2) 
    {
        rent = 150;
    }
    else if (m_houses == 3) 
    {
        rent = 450;
    }
    else if (m_houses == 4) 
    {
        rent = 625;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//NorthumberlandAvenue
NorthumberlandAvenue::NorthumberlandAvenue()
{
    m_position = 14;
    m_price = 160;
    m_build_cost = 100;
    m_morgage_value = 80;
}

NorthumberlandAvenue::~NorthumberlandAvenue()
{
}

int
NorthumberlandAvenue::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 12;

    if (m_hotel == 1) 
    {
        rent = 900;
    }
    else if (m_houses == 1) 
    {
        rent = 60;
    }
    else if (m_houses == 2) 
    {
        rent = 180;
    }
    else if (m_houses == 3) 
    {
        rent = 500;
    }
    else if (m_houses == 4) 
    {
        rent = 700;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//BowStreet
BowStreet::BowStreet()
{
    m_position = 16;
    m_price = 180;
    m_build_cost = 100;
    m_morgage_value = 90;
}

BowStreet::~BowStreet()
{
}

int
BowStreet::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 14;

    if (m_hotel == 1) 
    {
        rent = 950;
    }
    else if (m_houses == 1) 
    {
        rent = 70;
    }
    else if (m_houses == 2) 
    {
        rent = 200;
    }
    else if (m_houses == 3) 
    {
        rent = 550;
    }
    else if (m_houses == 4) 
    {
        rent = 750;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//MarlboroughStreet
MarlboroughStreet::MarlboroughStreet()
{
    m_position = 18;
    m_price = 180;
    m_build_cost = 100;
    m_morgage_value = 90;
}

MarlboroughStreet::~MarlboroughStreet()
{
}

int
MarlboroughStreet::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 14;

    if (m_hotel == 1) 
    {
        rent = 950;
    }
    else if (m_houses == 1) 
    {
        rent = 70;
    }
    else if (m_houses == 2) 
    {
        rent = 200;
    }
    else if (m_houses == 3) 
    {
        rent = 550;
    }
    else if (m_houses == 4) 
    {
        rent = 750;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//VineStreet
VineStreet::VineStreet()
{
    m_position = 19;
    m_price = 200;
    m_build_cost = 100;
    m_morgage_value = 100;
}

VineStreet::~VineStreet()
{
}

int
VineStreet::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 16;

    if (m_hotel == 1) 
    {
        rent = 1000;
    }
    else if (m_houses == 1) 
    {
        rent = 80;
    }
    else if (m_houses == 2) 
    {
        rent = 220;
    }
    else if (m_houses == 3) 
    {
        rent = 600;
    }
    else if (m_houses == 4) 
    {
        rent = 800;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//Strand
Strand::Strand()
{
    m_position = 21;
    m_price = 220;
    m_build_cost = 150;
    m_morgage_value = 110;
}

Strand::~Strand()
{
}

int
Strand::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 18;

    if (m_hotel == 1) 
    {
        rent = 1050;
    }
    else if (m_houses == 1) 
    {
        rent = 90;
    }
    else if (m_houses == 2) 
    {
        rent = 250;
    }
    else if (m_houses == 3) 
    {
        rent = 700;
    }
    else if (m_houses == 4) 
    {
        rent = 875;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//FleetStreet
FleetStreet::FleetStreet()
{
    m_position = 23;
    m_price = 220;
    m_build_cost = 150;
    m_morgage_value = 110;
}

FleetStreet::~FleetStreet()
{
}

int
FleetStreet::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 18;

    if (m_hotel == 1) 
    {
        rent = 1050;
    }
    else if (m_houses == 1) 
    {
        rent = 90;
    }
    else if (m_houses == 2) 
    {
        rent = 250;
    }
    else if (m_houses == 3) 
    {
        rent = 700;
    }
    else if (m_houses == 4) 
    {
        rent = 875;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//TrafalgarSquare
TrafalgarSquare::TrafalgarSquare()
{
    m_position = 24;
    m_price = 240;
    m_build_cost = 150;
    m_morgage_value = 120;
}

TrafalgarSquare::~TrafalgarSquare()
{
}

int
TrafalgarSquare::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 20;

    if (m_hotel == 1) 
    {
        rent = 1100;
    }
    else if (m_houses == 1) 
    {
        rent = 100;
    }
    else if (m_houses == 2) 
    {
        rent = 300;
    }
    else if (m_houses == 3) 
    {
        rent = 750;
    }
    else if (m_houses == 4) 
    {
        rent = 925;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//LeicesterSquare
LeicesterSquare::LeicesterSquare()
{
    m_position = 26;
    m_price = 260;
    m_build_cost = 150;
    m_morgage_value = 150;
}

LeicesterSquare::~LeicesterSquare()
{
}

int
LeicesterSquare::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 22;

    if (m_hotel == 1) 
    {
        rent = 1150;
    }
    else if (m_houses == 1) 
    {
        rent = 110;
    }
    else if (m_houses == 2) 
    {
        rent = 330;
    }
    else if (m_houses == 3) 
    {
        rent = 800;
    }
    else if (m_houses == 4) 
    {
        rent = 975;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//CoventryStreet
CoventryStreet::CoventryStreet()
{
    m_position = 27;
    m_price = 260;
    m_build_cost = 150;
    m_morgage_value = 150;
}

CoventryStreet::~CoventryStreet()
{
}

int
CoventryStreet::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 22;

    if (m_hotel == 1) 
    {
        rent = 1150;
    }
    else if (m_houses == 1) 
    {
        rent = 110;
    }
    else if (m_houses == 2) 
    {
        rent = 330;
    }
    else if (m_houses == 3) 
    {
        rent = 800;
    }
    else if (m_houses == 4) 
    {
        rent = 975;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//Piccadilly
Piccadilly::Piccadilly()
{
    m_position = 29;
    m_price = 280;
    m_build_cost = 140;
    m_morgage_value = 150;
}

Piccadilly::~Piccadilly()
{
}

int
Piccadilly::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 22;

    if (m_hotel == 1) 
    {
        rent = 1200;
    }
    else if (m_houses == 1) 
    {
        rent = 120;
    }
    else if (m_houses == 2) 
    {
        rent = 360;
    }
    else if (m_houses == 3) 
    {
        rent = 850;
    }
    else if (m_houses == 4) 
    {
        rent = 1025;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//RegentStreet
RegentStreet::RegentStreet()
{
    m_position = 31;
    m_price = 300;
    m_build_cost = 150;
    m_morgage_value = 200;
}

RegentStreet::~RegentStreet()
{
}

int
RegentStreet::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 26;

    if (m_hotel == 1) 
    {
        rent = 1275;
    }
    else if (m_houses == 1) 
    {
        rent = 130;
    }
    else if (m_houses == 2) 
    {
        rent = 390;
    }
    else if (m_houses == 3) 
    {
        rent = 900;
    }
    else if (m_houses == 4) 
    {
        rent = 1100;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//OxfordStreet
OxfordStreet::OxfordStreet()
{
    m_position = 32;
    m_price = 300;
    m_build_cost = 150;
    m_morgage_value = 200;
}

OxfordStreet::~OxfordStreet()
{
}

int
OxfordStreet::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 26;

    if (m_hotel == 1) 
    {
        rent = 1275;
    }
    else if (m_houses == 1) 
    {
        rent = 130;
    }
    else if (m_houses == 2) 
    {
        rent = 390;
    }
    else if (m_houses == 3) 
    {
        rent = 900;
    }
    else if (m_houses == 4) 
    {
        rent = 1100;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//BondStreet
BondStreet::BondStreet()
{
    m_position = 34;
    m_price = 320;
    m_build_cost = 160;
    m_morgage_value = 200;
}

BondStreet::~BondStreet()
{
}

int
BondStreet::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 28;

    if (m_hotel == 1) 
    {
        rent = 1400;
    }
    else if (m_houses == 1) 
    {
        rent = 150;
    }
    else if (m_houses == 2) 
    {
        rent = 450;
    }
    else if (m_houses == 3) 
    {
        rent = 1000;
    }
    else if (m_houses == 4) 
    {
        rent = 1200;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//ParkLane
ParkLane::ParkLane()
{
    m_position = 37;
    m_price = 350;
    m_build_cost = 200;
    m_morgage_value = 175;
}

ParkLane::~ParkLane()
{
}

int
ParkLane::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 35;

    if (m_hotel == 1) 
    {
        rent = 1500;
    }
    else if (m_houses == 1) 
    {
        rent = 175;
    }
    else if (m_houses == 2) 
    {
        rent = 500;
    }
    else if (m_houses == 3) 
    {
        rent = 1100;
    }
    else if (m_houses == 4) 
    {
        rent = 1300;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

//Mayfair
Mayfair::Mayfair()
{
    m_position = 39;
    m_price = 400;
    m_build_cost = 200;
    m_morgage_value = 200;
}

Mayfair::~Mayfair()
{
}

int
Mayfair::rent()
{
    if (m_mortgaged)
    {
        return 0;
    }

    int rent = 50;

    if (m_hotel == 1) 
    {
        rent = 2000;
    }
    else if (m_houses == 1) 
    {
        rent = 200;
    }
    else if (m_houses == 2) 
    {
        rent = 600;
    }
    else if (m_houses == 3) 
    {
        rent = 1400;
    }
    else if (m_houses == 4) 
    {
        rent = 1700;
    }
    else if (m_owned_all_colors == 1) 
    {
        rent *= 2;
    }

    return rent;
}

