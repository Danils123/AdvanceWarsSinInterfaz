#include "stdafx.h"
#include "ListaUnidades.h"
#include "PilaUnidades.h"
#include "ColaUnidades.h"
#include <sstream>

template <class T, class U>
ListaUnidades<T, U>::ListaUnidades()
{
	setCabeza(NULL);
}

template <class T, class U>
NodoUnidades* ListaUnidades<T, U>::getCabeza() {
	return cabeza;
};

template <class T, class U>
void ListaUnidades<T, U>::setCabeza(NodoUnidades* pcabeza) {
	cabeza = pcabeza;
};

template <class T, class U>
bool ListaUnidades<T, U>::isListaVacia() {
	return getCabeza() == NULL;
};

template <class T, class U>
NodoUnidades* ListaUnidades<T, U>::buscar(int id) {
	NodoUnidades* aux = getCabeza();
	while (aux != NULL) {
		if (aux->getUnidad()->getId() == id) {
			return aux;
		}
		aux = aux->getSig();
	};
	return NULL;
};

template <class T, class U>
void ListaUnidades<T, U>::insertar(int pId, int pVida, int pRango, int pTipo, int pPosX, int pPosY) {
	Unidad unidad(pId, pVida, pRango, pTipo, pPosX, pPosY);
	lista->insertar(unidad, getCabeza());
};

template <class T, class U>
void ListaUnidades<T, U>::eliminar() {
	lista->eliminar(getCabeza());
};

template <class T, class U>
std::string ListaUnidades<T, U>::toString() {
	std::ostringstream s;
	if (!isListaVacia()) {
		NodoUnidades* aux = getCabeza();
		while (aux != NULL) {
			/*s << "\n";
			s << "Nombre: ";
			s << aux->getPersona().getNombre();
			s << "\n";
			s << "Apellidos: ";
			s << aux->getPersona().getApellidos();
			s << "\n";
			s << "Cedula: ";
			s << aux->getPersona().getCedula();
			s << "\n";
			s << "Domicio: ";
			s << aux->getPersona().getDomicilio();
			s << "\n";
			s << "\n";
			s << "\n";*/
			aux = aux->getSiguiente();
		};
	}
	else {
		s << "Lista vacia";
	}
	return s.str();
};

template <class T, class U>
void ListaUnidades<T, U>::setLista(int tipo) {
	if (lista == NULL)
	{
		switch (tipo)
		{
		case 1:
			PilaUnidades* pila;
			lista = &pila;
			break;
		case 2:
			ColaUnidades* cola;
			lista = &cola;
			break;
		default:
			PilaUnidades* pila;
			lista = &pila;
			break;
		}
	}
};

template <class T, class U>
void ListaUnidades<T, U>::reducirVida(int valor) {
	
};