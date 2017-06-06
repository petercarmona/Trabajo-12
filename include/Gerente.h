#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"

class Gerente : public Persona
{
        public:
        Gerente(int d, int m, int a);
        void print();
        ~Gerente();
};

#endif // GERENTE_H
