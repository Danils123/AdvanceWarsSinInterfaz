#pragma once
#ifndef LISTAUNIDADES_H
#define LISTAUNIDADES_H
#include "Lista.h"
#include "NodoUnidades.h"
#include <string>

template <class T, class U>
class ListaUnidades
{
public:
	ListaUnidades();
	NodoUnidades* getCabeza();
	void setCabeza(NodoUnidades*);
	bool isListaVacia();
	NodoUnidades* buscar(int);
	void insertar(int, int, int, int, int, int);
	void eliminar();
	std::string toString();
	void setLista(int);
	//Unidad setUnidad(int, int, int, int, int, int);
	void reducirVida(int);
private:
	Lista<T, U>* lista;
	NodoUnidades* cabeza;
};


#endif
