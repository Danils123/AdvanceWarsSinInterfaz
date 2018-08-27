#ifndef PILAHISTORIAL_H
#define PILAHISTORIAL_H
#include "Pila.h"
#include "NodoHistorial.h"

class PilaHistorial
{
public:
	virtual NodoHistorial* insertar(Historial registro, NodoHistorial* ultimo) {
		apilar(registro, ultimo);
	};

	virtual NodoHistorial* eliminar(NodoHistorial* ultimo) {
		desapilar(ultimo);
	};

	virtual NodoHistorial* apilar(Historial registro, NodoHistorial* ultimo)
	{
		NodoHistorial* nuevo = new NodoHistorial(registro);
		nuevo->setSig(ultimo);
		ultimo = nuevo;
		return ultimo;
	};

	virtual NodoHistorial* desapilar(NodoHistorial* ultimo)
	{
		NodoHistorial* aux = ultimo;
		ultimo = aux->getSig();
		delete aux;
		return ultimo;
	};
};


#endif