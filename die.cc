#include <iostream>
#include <fstream>
#include <cstdlib>
#include "die.h"
using namespace std;

Die::Die(){
    numSides = 6;
    srand(time(NULL));
    faceValue = rand() % numSides + 1;
}

Die::Die(int newNumSides){
    if (newNumSides > 1){
        numSides = newNumSides;
    }
    else {
        numSides = 6;
    }
    srand(time(NULL));
    faceValue = rand() % numSides + 1;
}

void Die::setNumSides(int newNumSides){
    if (newNumSides > 1){
        numSides = newNumSides;
    }
}

int Die::getFaceValue(){
    return faceValue;
}

int Die::roll(){
    faceValue = rand() % numSides + 1;
    return faceValue;
}

ostream& operator << (ostream &out, const Die &d){
    out << d.faceValue;
    return out;
}