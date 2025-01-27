#ifndef DIE_H
#define DIE_H

class Die
{
    private:
    const int SIDES;
    int faceValue;

    public:

    Die();
    Die(int sides);

    void roll();
    int getSides();
    int getFaceValue();
    void printDie() const;
};



#endif