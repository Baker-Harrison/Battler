#include "Die.h"
#include <iostream>

using namespace std;


Die::Die() :

SIDES(6)
{
    roll();
}

void Die::roll()
{
    faceValue = (rand() % SIDES) + 1;
}

int Die::getSides()
{
    return SIDES;
}

int Die::getFaceValue()
{
    return faceValue;
}