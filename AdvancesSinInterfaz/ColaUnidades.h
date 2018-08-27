#ifndef COLAUNIDADES_H
#define COLAUNIDADES_H

#include "Colas.h"
#include "NodoUnidades.h"
using namespace std;

template <class T, class U>
class ColaUnidades: public Colas <T, U>
{
public:
	virtual NodoUnidades* insertar(Unidad unidad, NodoUnidades* cabeza) {
		 return encolar(unidad, cabeza);
	};

	virtual NodoUnidades* eliminar(NodoUnidades* cabeza) {
		return descolar(cabeza);
	};

	NodoUnidades* encolar(Unidad unidad, NodoUnidades* cabeza) {
		NodoUnidades* nuevo = new NodoUnidades(unidad);
		cabeza->setSig(nuevo);
		return cabeza;
	};

	NodoUnidades* descolar(NodoUnidades* cabeza) {
		NodoUnidades* aux = cabeza;
		cabeza = aux->getSig();
		delete aux;
		return cabeza;
	};
};

#endif