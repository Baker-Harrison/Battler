#include "Die.h"
#include <iostream>

using namespace std;

Die::Die() :

             SIDES(6)
{
    roll();
}

Die::Die(int sides) : SIDES(sides)
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

void Die::printDie() const
{
    cout << "A " << SIDES << " sided die showing a " << faceValue << endl;
}