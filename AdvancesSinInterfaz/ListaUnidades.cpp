#include "stdafx.h"
#include "ListaUnidades.h"
#include "PilaUnidades.h"
#include "ColaUnidades.h"

template <typename T>
ListaUnidades<T>::ListaUnidades()
{
	setCabeza(NULL);
}

template <typename T>
NodoUnidades* ListaUnidades<T>::getCabeza() {
	return cabeza;
};

template <typename T>
void ListaUnidades<T>::setCabeza(NodoUnidades*) {
	return getCabeza() == NULL;
};

template <typename T>
bool ListaUnidades<T>::isListaVacia() {
	return true;
};

template <typename T>
NodoUnidades* ListaUnidades<T>::buscar(int id) {
	NodoUnidades* aux = getCabeza();
	while (aux != NULL) {
		if (aux->getUnidad()->getId() == id) {
			return aux;
		}
		aux = aux->getSig();
	};
	return NULL;
};

template <typename T>
Unidad ListaUnidades<T>::setUnidad(int pId, int pVida, int pRango, int pTipo, int pPosX, int pPosY) {
	Unidad unidad;
	unidad.setEstado(true);
	unidad.setId(pId);
	unidad.setPosX(pPosX);
	unidad.setPosY(pPosY);
	unidad.setRango(pRango);
	unidad.setTipo(pTipo);
	unidad.setVida(pVida);
};

template <typename T>
void ListaUnidades<T>::insertar(int pId, int pVida, int pRango, int pTipo, int pPosX, int pPosY) {
	Unidad unidad = setUnidad(pId, pVida, pRango, pTipo, pPosX, pPosY);
	lista.insertar(unidad, getCabeza());
};

template <typename T>
void ListaUnidades<T>::eliminar(int id) {
	lista.eliminar(id, getCabeza());
};

template <typename T>
std::string ListaUnidades<T>::toString() {
	 
};

template <typename T>
void ListaUnidades<T>::setLista(int tipo) {
	if (lista == NULL)
	{
		switch (tipo)
		{
		case 1:
			PilaUnidades pila;
			lista = pila;
			break;
		case 2:
			ColaUnidades cola;
			lista = cola;
			break;
		default:
			PilaUnidades pila;
			lista = pila;
			break;
		}
	}
};
