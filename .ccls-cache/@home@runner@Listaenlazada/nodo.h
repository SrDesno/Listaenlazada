class nodo
{
private:
   int num;
   nodo *sig;
public:
   nodo();
   void setDato(int num);
   int getDato();
   void setSiguiente(nodo *sig);
   nodo *getSiguiente();
   ~nodo();
};