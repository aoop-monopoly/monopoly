#include "Square.hpp"

Square::Square()
    :m_square_type(SquareType::go)
{
}

Square::Square(SquareType square_type)
    :m_square_type(square_type)
{
}

Square::Square(SquareType square_type, string square_name)
    :m_square_type(square_type)
{
}


Square::~Square(void)
{
}
