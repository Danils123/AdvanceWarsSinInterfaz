#ifndef NODOHISTORIAL_H
#define NODOHISTORIAL_H
#include "Historial.h"

class NodoHistorial
{
public:
	NodoHistorial(Historial);
	~NodoHistorial();

	void setRegistro(Historial);
	void setSig(NodoHistorial*);

	Historial* getRegistro();
	NodoHistorial* getSig();

private:
	Historial registro;
	NodoHistorial* sig;
};


#endif