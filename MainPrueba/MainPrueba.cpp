// MainPrueba.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Lista.h"
#include "Nodo.h"
//template <typename T, typename X>
int main()
{
	Lista lista;

	Nodo* nodo = new Nodo();
	nodo->setInfo(4);
	nodo->setSig(NULL);
	lista.cabeza = nodo;

	lista.apilar(9);
    return 0;
}

