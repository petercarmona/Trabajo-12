#include "Gerente.h"

Gerente::Gerente(int d, int m, int a)
{
    b = new Birthday(d,m,a);
    cout<<b->dia<<" "<<b->mes<<" "<<b->anio<<endl;
}

void Gerente::print()
{
    cout<<"Gerente"<<endl;
}

Gerente::~Gerente()
{

}
