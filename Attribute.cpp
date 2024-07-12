#include "Attribute.h"
#include "Die.h"
#include <iostream>
using namespace std;

Attribute::Attribute()
{
    Die die;

    baseScore = 0;

    for (int i = 0; i < 3; i++)
    {
        die.roll();
        baseScore += die.getFaceValue();
        cout << "Roll " << (i + 1) << " is " << die.getFaceValue() << endl;
    }
    currentScore = baseScore;
    cout << "Current score: " << currentScore << endl;
}

Attribute::Attribute(string Name)
{
    name = Name;
    Attribute();
}
Attribute::Attribute(string Name, int Value)
{
    name = Name;
    baseScore = Value;
    currentScore = Value;

    Attribute();
}

string Attribute::getName()
{
    return name;
}
void Attribute::setName(string new_name)
{
    name = new_name;
}
int Attribute::getScore()
{
    return currentScore;
}
void Attribute::modifyScore(int mod)
{
    currentScore += mod;
}
int Attribute::getModifier()
{
    return (currentScore - 10) / 2;
}
void Attribute::resetCurrentScore()
{
    currentScore = baseScore;
}
