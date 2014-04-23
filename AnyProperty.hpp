#pragma once
#include "Player.hpp"

class AnyProperty 
{
public:
    AnyProperty();
    ~AnyProperty();
    
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

protected:
    Player owner;
    bool mortgaged;
    int houses;
    int hotel;
    int monopoly;
    int position;
    int price;
};


//OldKentRoad
class OldKentRoad : public AnyProperty
{
    OldKentRoad();
    ~OldKentRoad();
};

//WhitechapelRoad
class WhitechapelRoad : public AnyProperty
{
    WhitechapelRoad();
    ~WhitechapelRoad();
};

//TheAngelIslington
class TheAngelIslington : public AnyProperty
{
    TheAngelIslington();
    ~TheAngelIslington();
};

//EustonRoad
class EustonRoad : public AnyProperty
{
    EustonRoad();
    ~EustonRoad();
};

//PentonvilleRoad
class PentonvilleRoad : public AnyProperty
{
    PentonvilleRoad();
    ~PentonvilleRoad();
};

//PallMall
class PallMall : public AnyProperty
{
    PallMall();
    ~PallMall();
};

//Whitehall
class Whitehall : public AnyProperty
{
    Whitehall();
    ~Whitehall();
};

//NorthumberlandAvenue
class NorthumberlandAvenue : public AnyProperty
{
    NorthumberlandAvenue();
    ~NorthumberlandAvenue();
};

//BowStreet
class BowStreet : public AnyProperty
{
    BowStreet();
    ~BowStreet();
};

//MarlboroughStreet
class MarlboroughStreet : public AnyProperty
{
    MarlboroughStreet();
    ~MarlboroughStreet();
};

//VineStreet
class VineStreet : public AnyProperty
{
    VineStreet();
    ~VineStreet();
};

//Strand
class Strand : public AnyProperty
{
    Strand();
    ~Strand();
};

//FleetStreet
class FleetStreet : public AnyProperty
{
    FleetStreet();
    ~FleetStreet();
};

//TrafalgarSquare
class TrafalgarSquare : public AnyProperty
{
    TrafalgarSquare();
    ~TrafalgarSquare();
};

//LeicesterSquare
class LeicesterSquare : public AnyProperty
{
    LeicesterSquare();
    ~LeicesterSquare();
};

//CoventryStreet
class CoventryStreet : public AnyProperty
{
    CoventryStreet();
    ~CoventryStreet();
};

//Piccadilly
class Piccadilly : public AnyProperty
{
    Piccadilly();
    ~Piccadilly();
};

//RegentStreet
class RegentStreet : public AnyProperty
{
    RegentStreet();
    ~RegentStreet();
};

//OxfordStreet
class OxfordStreet : public AnyProperty
{
    OxfordStreet();
    ~OxfordStreet();
};

//BondStreet
class BondStreet : public AnyProperty
{
    BondStreet();
    ~BondStreet();
};

//ParkLane
class ParkLane : public AnyProperty
{
    ParkLane();
    ~ParkLane();
};

//Mayfair
class Mayfair : public AnyProperty
{
    Mayfair();
    ~Mayfair();
};


