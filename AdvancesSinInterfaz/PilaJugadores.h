#pragma once
#include "NodoJugadores.h"
template <typename T>
class PilaJugadores
{
public:
	PilaJugadores();
	~PilaJugadores();

	void insertar(T);
	void eliminar(int);
	void apilar(NodoJugadores*);
	void desapilar(NodoJugadores*);
};

