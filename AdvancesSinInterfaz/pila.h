#ifndef PILA_H
#define PILA_H
#include "stdafx.h"
#include "Lista.h"

#include <string>
using namespace std;

template <typename T>
class Pila : public Lista<T>
{
public:
	virtual void apilar(T);
	virtual void desapilar(T);
};

#endif
