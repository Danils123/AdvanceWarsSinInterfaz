#ifndef PILAHISTORIAL_H
#define PILAHISTORIAL_H
#include "Pila.h"
#include "NodoHistorial.h"

class PilaHistorial
{
public:
	virtual void insertar(Historial registro, NodoHistorial* ultimo) {
		apilar(registro, ultimo);
	};

	virtual void eliminar(NodoHistorial* ultimo) {
		desapilar(ultimo);
	};

	virtual void apilar(Historial registro, NodoHistorial* ultimo)
	{
		NodoHistorial* nuevo = new NodoHistorial(registro);
		nuevo->setSig(ultimo);
		ultimo = nuevo;
	};

	virtual void desapilar(NodoHistorial* ultimo)
	{
		NodoHistorial* aux = ultimo;
		ultimo = aux->getSig();
		delete aux;
	};
};


#endif