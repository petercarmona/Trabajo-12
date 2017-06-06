#ifndef PERSONA_H
#define PERSONA_H
#include "Birthday.h"
#include <iostream>

using namespace std;

class Persona
{
    private:
        Birthday *b;
    public:
        Persona();
        virtual void print();
        ~Persona();
};

#endif // PERSONA_H
