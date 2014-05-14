#pragma once

#include "AnyProperty.hpp"
#include "AnyNonProperty.hpp"

#include <string>
using namespace std;


enum SquareType    
{
    chance,
    community_chest,
    free_parking,
    jail,
    go,
    go_to_jail,
    property,
    station,
    tax,
    utilities,
};

enum PropertyColor
{
    brown,
    blue,
    pink,
    orange,
    red,
    yellow,
    green,
    dark_blue,
    color_utilities,
    color_stations,
    color_tax_office,
    color_none
};

class Square
{
public:
    Square(void);
	Square(SquareType square_type, string square_name);
    Square(SquareType square_type, PropertyColor color, string square_name, AnyProperty *property);
    Square(SquareType square_type, string square_name, AnyNonProperty *non_property);
	~Square(void);

    SquareType getType();
    PropertyColor getColor();
    AnyProperty* getProperty();
    bool isProperty();
    AnyNonProperty* getNonProperty();
    bool isNonProperty();
    string getSquareName();
    void informSquare();

private: 
    SquareType   m_square_type;
    PropertyColor m_color;
    AnyProperty *m_property;
    AnyNonProperty *m_non_property;
    string m_square_name;
};
