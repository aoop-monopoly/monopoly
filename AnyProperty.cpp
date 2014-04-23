#include "AnyProperty.hpp"

AnyProperty::AnyProperty()
{
}

AnyProperty::~AnyProperty(void)
{
}


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

//OldKentRoad
OldKentRoad::OldKentRoad()
{
    position = 1;
    price = 60;
}

OldKentRoad::~OldKentRoad(void)
{
}

//WhitechapelRoad
WhitechapelRoad::WhitechapelRoad()
{
    position = 3;
    price = 60;
}

WhitechapelRoad::~WhitechapelRoad(void)
{
}

//TheAngelIslington
TheAngelIslington::TheAngelIslington()
{
    position = 6;
    price = 100;
}

TheAngelIslington::~TheAngelIslington(void)
{
}

//EustonRoad
EustonRoad::EustonRoad()
{
    position = 8;
    price = 100;
}

EustonRoad::~EustonRoad(void)
{
}

//PentonvilleRoad
PentonvilleRoad::PentonvilleRoad()
{
    position = 9;
    price = 120;
}

PentonvilleRoad::~PentonvilleRoad(void)
{
}

//PallMall
PallMall::PallMall()
{
    position = 11;
    price = 140;
}

PallMall::~PallMall()
{
}

//Whitehall
Whitehall::Whitehall()
{
    position = 13;
    price = 140;
}

Whitehall::~Whitehall()
{
}

//NorthumberlandAvenue
NorthumberlandAvenue::NorthumberlandAvenue()
{
    position = 14;
    price = 160;
}

NorthumberlandAvenue::~NorthumberlandAvenue()
{
}

//BowStreet
BowStreet::BowStreet()
{
    position = 16;
    price = 180;
}

BowStreet::~BowStreet()
{
}

//MarlboroughStreet
MarlboroughStreet::MarlboroughStreet()
{
    position = 18;
    price = 180;
}

MarlboroughStreet::~MarlboroughStreet()
{
}

//VineStreet
VineStreet::VineStreet()
{
    position = 19;
    price = 200;
}

VineStreet::~VineStreet()
{
}

//Strand
Strand::Strand()
{
    position = 21;
    price = 220;
}

Strand::~Strand()
{
}

//FleetStreet
FleetStreet::FleetStreet()
{
    position = 23;
    price = 220;
}

FleetStreet::~FleetStreet()
{
}

//TrafalgarSquare
TrafalgarSquare::TrafalgarSquare()
{
    position = 24;
    price = 240;
}

TrafalgarSquare::~TrafalgarSquare()
{
}

//LeicesterSquare
LeicesterSquare::LeicesterSquare()
{
    position = 26;
    price = 260;
}

LeicesterSquare::~LeicesterSquare()
{
}

//CoventryStreet
CoventryStreet::CoventryStreet()
{
    position = 27;
    price = 260;
}

CoventryStreet::~CoventryStreet()
{
}

//Piccadilly
Piccadilly::Piccadilly()
{
    position = 29;
    price = 280;
}

Piccadilly::~Piccadilly()
{
}

//RegentStreet
RegentStreet::RegentStreet()
{
    position = 31;
    price = 300;
}

RegentStreet::~RegentStreet()
{
}

//OxfordStreet
OxfordStreet::OxfordStreet()
{
    position = 32;
    price = 300;
}

OxfordStreet::~OxfordStreet()
{
}

//BondStreet
BondStreet::BondStreet()
{
    position = 34;
    price = 320;
}

BondStreet::~BondStreet()
{
}

//ParkLane
ParkLane::ParkLane()
{
    position = 37;
    price = 350;
}

ParkLane::~ParkLane()
{
}

//Mayfair
Mayfair::Mayfair()
{
    position = 39;
    price = 400;
}

Mayfair::~Mayfair()
{
}


