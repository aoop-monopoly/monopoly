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

class Square
{
public:
    Square(void);
	Square(SquareType square_type);
    Square(SquareType square_type, string square_name, AnyProperty *property);
    Square(SquareType square_type, AnyNonProperty *non_property);
	~Square(void);

    SquareType getType();
    int getOwnerId();
    string getSquareName();
    void informSquare();
    void visit(Player game_player);

private: 
    SquareType   m_square_type;
    AnyProperty *m_property;
    AnyNonProperty *m_non_property;
    string m_square_name;
};
