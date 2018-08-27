#ifndef COLAUNIDADES_H
#define COLAUNIDADES_H

#include "Colas.h"
#include "NodoUnidades.h"
using namespace std;

template <class T, class U>
class ColaUnidades: public Colas <T, U>
{
public:
	virtual void insertar(Unidad unidad, NodoUnidades* cabeza) {
		encolar(cabeza, cabeza);
	};

	virtual void eliminar(NodoUnidades* cabeza) {
		descolar(cabeza);
	};

	void encolar(Unidad unidad, NodoUnidades* cabeza) {
		NodoUnidades* nuevo = new NodoUnidades(unidad);
		cabeza->setSig(nuevo);
	};

	void descolar(NodoUnidades* cabeza) {
		NodoUnidades* aux = cabeza;
		cabeza = aux->getSig();
		delete aux;
	};
};

#endif