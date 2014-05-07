#include "Square.hpp"
#include <iostream>

using  namespace std;

Square::Square()
    :m_square_type(SquareType::go)
{
}

Square::Square(SquareType square_type)
    :m_square_type(square_type),
    m_property(NULL),
    m_non_property(NULL),
    m_square_name("")
{
}

Square::Square(SquareType square_type, string square_name, AnyProperty *property)
    :m_square_type(square_type),
    m_property(property),
    m_non_property(NULL),
    m_square_name(square_name)
{
    cout << "Square Rent : " << m_property->rent()<< "\n";
}

Square::Square(SquareType square_type, AnyNonProperty *non_property)
    :m_square_type(square_type),
    m_non_property(non_property),
    m_property(NULL),
    m_square_name("")
{
}

Square::~Square(void)
{
    if(m_property != NULL)
    {
        delete m_property;
    }

    if(m_non_property != NULL)
    {
        delete m_non_property;
    }
}

SquareType
Square::getType()
{
    return m_square_type;
}

int
Square::getOwnerId()
{
    if(m_property)
    {
        return m_property->getOwner().getId();
    }
    return 0;
}

string
Square::getSquareName()
{
    return m_square_name;
}

void
Square::informSquare()
{
    cout << m_square_name << "\n";

    if(m_property)
    {
        if(m_property->getOwner().getId())
        {
            cout << "Owner : " << m_property->getOwner().getName() << "\n";
            cout << "Rent : " << m_property->rent() << "\n";
        }
    }
}

