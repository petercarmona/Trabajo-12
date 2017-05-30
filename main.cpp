#include <iostream>
#include "Gerente.h"
#include "Conserge.h"

using namespace std;

int main()
{
    Persona *a = new Gerente(1,2,4);
    Persona *b = new Conserge(5,1,4);
    a->print();
    b->print();
    return 0;
}
