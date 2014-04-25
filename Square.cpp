#include "Square.hpp"
#include <iostream>

using  namespace std;

Square::Square()
    :m_square_type(SquareType::go)
{
}

Square::Square(SquareType square_type)
    :m_square_type(square_type)
{
}

Square::Square(SquareType square_type, string square_name, AnyProperty *property)
    :m_square_type(square_type),
    m_property(property)
{
    cout << "Square Rent : " << m_property->rent()<< "\n";
}

Square::Square(SquareType square_type, string square_name)
    :m_square_type(square_type)
{
}

Square::~Square(void)
{
}
