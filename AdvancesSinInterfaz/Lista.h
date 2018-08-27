#pragma once
#ifndef LISTA_H
#define LISTA_H
#include "stdafx.h"
#include <string>
template <class T, class U>
class Lista
{

public:
	virtual U insertar(T, U) = 0;
	virtual U eliminar(U) = 0;
};

#endif
