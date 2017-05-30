#ifndef PERSONA_H
#define PERSONA_H
#include "Birthday.h"
#include <iostream>

using namespace std;

class Persona
{
    public:
        Birthday *b;

        Persona();
        virtual void print();
        ~Persona();
};

#endif // PERSONA_H
