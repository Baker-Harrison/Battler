#include <iostream>

using namespace std;

#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

class Attribute
{
private:
    string name;
    int baseScore;
    int currentScore;

public:
    Attribute();
    Attribute(string Name);
    Attribute(string Name, int Value);

    string getName();
    void setName(string new_name);
    int getScore();
    void modifyScore(int mod);
    int getModifier();
    void resetCurrentScore();

};

#endif