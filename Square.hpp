#pragma once

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
    Square(SquareType square_type, string square_name);
	~Square(void);

public: 
    SquareType   m_square_type;
};
