#ifndef PILAUNIDADES_H
#define PILAUNIDADES_H
#include "Pila.h"
#include "NodoUnidades.h"
using namespace std;

template <typename T>
class PilaUnidades: public Pila <T>
{
public:
	
	void insertar(T);
	void eliminar(int);
	void apilar(NodoUnidades*);
	void desapilar(NodoUnidades*);
};

#endif