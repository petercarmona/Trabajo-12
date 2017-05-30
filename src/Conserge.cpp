#include "Conserge.h"

Conserge::Conserge(int d, int m, int a)
{
    b = new Birthday(d,m,a);
    cout<<b->dia<<" "<<b->mes<<" "<<b->anio<<endl;
}

void Conserge::print()
{
    cout<<"Conserge"<<endl;
}

Conserge::~Conserge()
{

}
