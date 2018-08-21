#ifndef PILAUNIDADES_H
#define PILAUNIDADES_H
#include "Pila.h"
#include "NodoUnidades.h"

using namespace std;

template <class T, class U>
class PilaUnidades: public Pila <T, U>
{
public:
	virtual NodoUnidades* insertar(Unidad unidad, NodoUnidades* ultimo) {
		return apilar(unidad, ultimo);
	};

	virtual NodoUnidades* eliminar(NodoUnidades* ultimo) {
		return desapilar(ultimo);
	};

	virtual NodoUnidades* apilar(Unidad unidad, NodoUnidades* ultimo)
	{
		NodoUnidades* nuevo = new NodoUnidades(unidad);
		nuevo->setSig(ultimo);
		ultimo = nuevo;
		return ultimo;
	};

	virtual NodoUnidades* desapilar(NodoUnidades* ultimo)
	{	
		NodoUnidades* aux = ultimo;
		ultimo = aux->getSig();
		delete aux;
		return ultimo;
	};
};

#endif