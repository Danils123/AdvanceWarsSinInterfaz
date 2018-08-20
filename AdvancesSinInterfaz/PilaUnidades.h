#ifndef PILAUNIDADES_H
#define PILAUNIDADES_H
#include "Pila.h"
#include "NodoUnidades.h"

using namespace std;

template <typename T>
class PilaUnidades: public Pila <T>
{
public:
	virtual void insertar(Unidad unidad, NodoUnidades* ultimo) {
		apilar(unidad, ultimo);
	};

	virtual void eliminar(const NodoUnidades* ultimo) {
		desapilar(ultimo);
	};

	virtual void apilar(Unidad unidad, NodoUnidades* ultimo) 
	{
		NodoUnidades* nuevo = new NodoUnidades(unidad);
		nuevo.setSig(ultimo);
		ultimo = nuevo;
	};

	virtual void desapilar(const NodoUnidades* ultimo) 
	{	
		NodoUnidades* aux = ultimo;
		ultimo = aux->getSig();
		delete aux;
	};
};

#endif