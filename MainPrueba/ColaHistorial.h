#ifndef COLAHISTORIAL_H
#define COLAHISTORIAL_H
#include "Colas.h"
#include "NodoHistorial.h"

using namespace std;

template <class T, class U>
class ColaHistorial: public Colas <T, U>
{
public:
	virtual void insertar(Historial registro, NodoHistorial* cabeza) {
		encolar(registro, cabeza);
	};

	virtual void eliminar(NodoHistorial* cabeza) {
		descolar(cabeza);
	};

	void encolar(Historial registro, NodoHistorial* cabeza) {
		NodoHistorial* nuevo = new NodoHistorial(registro);
		cabeza->setSig(nuevo);
	};

	void descolar(NodoHistorial* cabeza) {
		NodoHistorial* aux = cabeza;
		cabeza = aux->getSig();
		delete aux;
	};
};

#endif