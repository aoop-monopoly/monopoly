#include "MyDice.hpp"
#include <stdlib.h>

MyDice::MyDice(int seed)
{
    m_seed = seed;
}

MyDice::~MyDice(void)
{
}

int
MyDice::dice()
{
    m_value = rand() % 12 + 1;
    
    return m_value;
}

bool
MyDice::isOdd()
{
    return m_value % 2 == 1;
}

bool
MyDice::isEven()
{
    return m_value % 2 == 0;
}


