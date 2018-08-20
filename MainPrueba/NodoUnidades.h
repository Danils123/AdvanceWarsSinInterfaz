#ifndef NODOUNIDADES_H
#define NODOUNIDADES_H
#include "Unidad.h"
class NodoUnidades
{
public:
	NodoUnidades();
	NodoUnidades(Unidad);
	~NodoUnidades();

	void setUnidad(Unidad);
	void setSig(NodoUnidades*);

	Unidad* getUnidad();
	NodoUnidades* getSig();
public:
	Unidad unidad;
	NodoUnidades* sig;
};

#endif 