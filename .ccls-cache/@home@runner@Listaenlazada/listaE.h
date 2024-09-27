#include "nodo.h"

class listaE
{
   private:
   nodo *cab;
public:
   listaE();
   void insertaInicio(int d);
   //void insertaFinal(int d);
   void Recorre();
   //void eliminaNodo(int d);
   //void insertaOrdenado(int d);
   ~listaE();
};