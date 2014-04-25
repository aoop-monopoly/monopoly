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
public:
    NorthumberlandAvenue();
    ~NorthumberlandAvenue();

    int rent();
};

//BowStreet
class BowStreet : public AnyProperty
{
public:
    BowStreet();
    ~BowStreet();

    int rent();
};

//MarlboroughStreet
class MarlboroughStreet : public AnyProperty
{
public:
    MarlboroughStreet();
    ~MarlboroughStreet();

    int rent();
};

//VineStreet
class VineStreet : public AnyProperty
{
public:
    VineStreet();
    ~VineStreet();

    int rent();
};

//Strand
class Strand : public AnyProperty
{
public:
    Strand();
    ~Strand();

    int rent();
};

//FleetStreet
class FleetStreet : public AnyProperty
{
public:
    FleetStreet();
    ~FleetStreet();

    int rent();
};

//TrafalgarSquare
class TrafalgarSquare : public AnyProperty
{
public:
    TrafalgarSquare();
    ~TrafalgarSquare();

    int rent();
};

//LeicesterSquare
class LeicesterSquare : public AnyProperty
{
public:
    LeicesterSquare();
    ~LeicesterSquare();

    int rent();
};

//CoventryStreet
class CoventryStreet : public AnyProperty
{
public:
    CoventryStreet();
    ~CoventryStreet();

    int rent();
};

//Piccadilly
class Piccadilly : public AnyProperty
{
public:
    Piccadilly();
    ~Piccadilly();

    int rent();
};

//RegentStreet
class RegentStreet : public AnyProperty
{
public:
    RegentStreet();
    ~RegentStreet();

    int rent();
};

//OxfordStreet
class OxfordStreet : public AnyProperty
{
public:
    OxfordStreet();
    ~OxfordStreet();

    int rent();
};

//BondStreet
class BondStreet : public AnyProperty
{
public:
    BondStreet();
    ~BondStreet();

    int rent();
};

//ParkLane
class ParkLane : public AnyProperty
{
public:
    ParkLane();
    ~ParkLane();

    int rent();
};

//Mayfair
class Mayfair : public AnyProperty
{
public:
    Mayfair();
    ~Mayfair();

    int rent();
};


