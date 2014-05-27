#pragma once
#ifndef player_hpp
#define player_hpp
#include "Player.hpp"
#endif


#define MAX_NUMBER_OF_HOUSES 4

class AnyProperty 
{
public:
    AnyProperty(int position, int price, int build_cost, 
                   int morgage_value, int base_rent, int m_one_house_rent, 
                   int two_house_rent, int three_house_rent, int four_house_rent, int hotel_rents);
    AnyProperty::AnyProperty(int position, int price, int morgage_value, int base_rent);
    ~AnyProperty();
    
    int getPosition();
    void payRent(Player &renter);
    void trade(Player &buyer, Player &seller);
    void mortgage();
    void unMortgage();
    int getHouses();
    int getHotel();
    int houseCost();
    int hotelCost();
    int mortgageValue();
    void buildHouse();
    void buildHotel();
    Player *getOwner();
    void setOwnColorGroup();
    bool ownColorGroup();   
    int rent();

private:
    Player *m_owner;
    bool m_mortgaged;
    bool m_owned_all_colors;
    int m_houses;
    int m_hotel;
    int m_position;
    int m_price;
    int m_build_cost;
    int m_morgage_value;
    int m_base_rent;
    int m_one_house_rent;
    int m_two_house_rent;
    int m_three_house_rent; 
    int m_four_house_rent;
    int m_hotel_rent;
};

