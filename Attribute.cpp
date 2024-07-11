#include "Attribute.h"
#include "Die.h"



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

Attribute::Attribute()
{
    Die die;

    for (int i = 0; i < 3; i++)
    {
        die.roll();

        baseScore += die.getFaceValue();
    }

}