#ifndef PILAUNIDADES_H
#define PILAUNIDADES_H
#include "Pila.h"
#include "NodoUnidades.h"

using namespace std;

template <class T, class U>
class PilaUnidades: public Pila <T, U>
{
public:
	virtual void insertar(Unidad unidad, NodoUnidades* ultimo) {
		apilar(unidad, ultimo);
	};

	virtual void eliminar(NodoUnidades* ultimo) {
		desapilar(ultimo);
	};

	virtual void apilar(Unidad unidad, NodoUnidades* ultimo) 
	{
		NodoUnidades* nuevo = new NodoUnidades(unidad);
		nuevo.setSig(ultimo);
		ultimo = nuevo;
	};

	virtual void desapilar(NodoUnidades* ultimo) 
	{	
		NodoUnidades* aux = ultimo;
		ultimo = aux->getSig();
		delete aux;
	};
};

#endif