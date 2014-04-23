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
    Player m_owner;
    bool m_mortgaged;
    bool m_owned_all_colors;
    int m_houses;
    int m_hotel;
    int m_position;
    int m_price;
};


//OldKentRoad
class OldKentRoad : public AnyProperty
{
public:
    OldKentRoad();
    ~OldKentRoad();

    int rent();
};

//WhitechapelRoad
class WhitechapelRoad : public AnyProperty
{
public:
    WhitechapelRoad();
    ~WhitechapelRoad();

    int rent();
};

//TheAngelIslington
class TheAngelIslington : public AnyProperty
{
public:
    TheAngelIslington();
    ~TheAngelIslington();

    int rent();
};

//EustonRoad
class EustonRoad : public AnyProperty
{
public:
    EustonRoad();
    ~EustonRoad();

    int rent();
};

//PentonvilleRoad
class PentonvilleRoad : public AnyProperty
{
public:
    PentonvilleRoad();
    ~PentonvilleRoad();

    int rent();
};

//PallMall
class PallMall : public AnyProperty
{
public:
    PallMall();
    ~PallMall();

    int rent();
};

//Whitehall
class Whitehall : public AnyProperty
{
public:
    Whitehall();
    ~Whitehall();

    int rent();
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


