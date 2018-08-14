
#ifndef LISTA_H
#define LISTA_H
#include "stdafx.h"
#include <string>
template <typename T>
class Lista
{

public:
	virtual T getCabeza();
	virtual void setCabeza(T);
	virtual bool isListaVacia();
	virtual T buscar(T);
	virtual void insertar(T);
	virtual void eliminar(T);
	virtual std::string toString();
private: 
	T cabeza;
};

#endif
