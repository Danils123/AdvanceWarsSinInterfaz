#ifndef COLAUNIDADES_H
#define COLAUNIDADES_H

#include "Colas.h"
#include "NodoUnidades.h"
using namespace std;

template <typename T>
class ColaUnidades: public Colas <T>
{
public:
	virtual void insertar(Unidad unidad, NodoUnidades* cabeza) {
		encolar(cabeza, ultimo);
	};

	virtual void eliminar(const int idx, const NodoUnidades* cabeza) {
		descolar(idx, cabeza);
	};

	void encolar(Unidad unidad, NodoUnidades* cabeza) {
		NodoUnidades* nuevo = new NodoUnidades(unidad);
		cabeza->setSig(nuevo);
	};

	void descolar(const int idx, const NodoUnidades* cabeza) {
		NodoUnidades* aux = cabeza;
		cabeza = aux->getSig();
		delete aux;
	};
};

#endif