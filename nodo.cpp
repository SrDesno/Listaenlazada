#include <iostream>
#include "nodo.h"

nodo::nodo()
{
    num=0;
   sig=NULL;
}

void nodo::setDato(int num)
{
   this->num=num;
}

int nodo::getDato(){
    return num;
}

void nodo::setSiguiente(nodo *s)
{
  sig=s;
}

nodo * nodo::getSiguiente()
{
   return(sig);
}

nodo::~nodo()
{
    //dtor
}