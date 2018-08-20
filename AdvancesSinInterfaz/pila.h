#ifndef PILA_H
#define PILA_H
#include "stdafx.h"
#include "Lista.h"

#include <string>
using namespace std;

template <class T, class U>
class Pila : public Lista<T, U>
{
public:
	virtual void apilar(T, U) = 0;
	virtual void desapilar(U) = 0;
};

#endif
