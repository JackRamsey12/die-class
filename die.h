#ifndef DIE_H
#define DIE_H
#include <iostream>
#include <fstream>
using namespace std;

class Die {
public:
    Die();

    Die(int newNumSides);

    int getFaceValue();

    int getNumSides();

    void setNumSides(int newNumSides);

    int roll();

    friend ostream& operator <<(ostream &out, const Die &d);

private:
    int faceValue;
    
    int numSides;
};

#endif