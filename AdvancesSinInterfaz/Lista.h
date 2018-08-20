#ifndef LISTA_H
#define LISTA_H
#include "stdafx.h"
#include <string>
template <typename T>
class Lista
{

public:
	virtual void insertar(T) = 0;
	virtual void eliminar(T) = 0;
};

#endif
