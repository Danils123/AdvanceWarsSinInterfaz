#ifndef COLAHISTORIAL_H
#define COLAHISTORIAL_H
#include "Colas.h"
#include "NodoHistorial.h"

using namespace std;

template <class T, class U>
class ColaHistorial: public Colas <T, U>
{
public:
	virtual NodoHistorial* insertar(Historial registro, NodoHistorial* cabeza) {
		return encolar(registro, cabeza);
	};

	virtual NodoHistorial* eliminar(NodoHistorial* cabeza) {
		return descolar(cabeza);
	};

	NodoHistorial* encolar(Historial registro, NodoHistorial* cabeza) {
		NodoHistorial* nuevo = new NodoHistorial(registro);
		cabeza->setSig(nuevo);
		return cabeza;
	};

	NodoHistorial* descolar(NodoHistorial* cabeza) {
		NodoHistorial* aux = cabeza;
		cabeza = aux->getSig();
		delete aux;
		return cabeza;
	};
};

#endif