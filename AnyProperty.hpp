#pragma once
#ifndef player_hpp
#define player_hpp
#include "Player.hpp"
#endif


#define MAX_NUMBER_OF_HOUSES 4

class AnyProperty 
{
public:
    AnyProperty();
    ~AnyProperty();
    
    int getPosition();
    void payRent(Player renter);
    void trade(Player buyer, Player seller);
    void mortgage();
    void unMortgage();
    int getHouses();
    int getHotel();
    int houseCost();
    int hotelCost();
    int mortgageValue();
    void buildHouse();
    void buildHotel();
    Player getOwner();
    bool ownColorGroup();
    
    virtual int rent() = 0;

protected:
    Player m_owner;
    bool m_mortgaged;
    bool m_owned_all_colors;
    int m_houses;
    int m_hotel;
    int m_position;
    int m_price;
    int m_build_cost;
    int m_morgage_value;
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


//KingsCrossStation 
class KingsCrossStation : public AnyProperty
{
public:
    KingsCrossStation();
    ~KingsCrossStation();

    int rent();
};

//MaryleboneStation 
class MaryleboneStation : public AnyProperty
{
public:
    MaryleboneStation();
    ~MaryleboneStation();

    int rent();
};

//FenchurchStStation 
class FenchurchStStation : public AnyProperty
{
public:
    FenchurchStStation();
    ~FenchurchStStation();

    int rent();
};

//LiverpoolStreetStation 
class LiverpoolStreetStation : public AnyProperty
{
public:
    LiverpoolStreetStation();
    ~LiverpoolStreetStation();

    int rent();
};

//ElectricCompany
class ElectricCompany : public AnyProperty
{
public:
    ElectricCompany();
    ~ElectricCompany();

    int rent();
};

//WaterWorks
class WaterWorks : public AnyProperty
{
public:
    WaterWorks();
    ~WaterWorks();

    int rent();
};

//IncomeTax
class IncomeTax : public AnyProperty
{
public:
    IncomeTax();
    ~IncomeTax();

    int rent();
};


