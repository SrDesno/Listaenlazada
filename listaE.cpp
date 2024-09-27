#include <iostream>
#include "listaE.h"
#include <stdlib.h>

using namespace std;

listaE::listaE()
{
	cab=NULL;
}

void listaE::insertaInicio(int d){
	nodo *nuevo;
	nuevo = new(nodo);
	nuevo -> setDato(d);
	nuevo -> setSiguiente(cab);
	cab = nuevo;
}

void listaE::Recorre(){
	nodo *aux;
	aux = cab;
	while(aux != NULL){
		cout << aux->getDato() << " ";
		aux = aux->getSiguiente();
	}
	cout << endl;
}

listaE::~listaE(){
	nodo *aux;
	while(cab!=NULL){
		aux=cab;
		cab=cab->getSiguiente();
		free(aux);
	}
}