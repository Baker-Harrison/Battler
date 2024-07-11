#ifndef DIE_H
#define DIE_H

class Die
{
    private:
    const int SIDES;
    int faceValue;

    public:

    Die();

    void roll();
    int getSides();
    int getFaceValue();
};



#endif