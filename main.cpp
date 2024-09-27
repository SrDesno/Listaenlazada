#include <iostream>
#include "listaE.h";

using namespace std;

int main()
{
    listaE l;

    l.insertaInicio(5);
    l.insertaInicio(4);
    l.insertaInicio(9);
    l.insertaInicio(3);
    l.insertaInicio(11);

 //   l.eliminaNodo(3);

     l.Recorre();

    return 0;
}