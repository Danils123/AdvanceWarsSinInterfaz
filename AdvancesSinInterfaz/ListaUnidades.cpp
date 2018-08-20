#include "stdafx.h"
#include "ListaUnidades.h"
#include "PilaUnidades.h"
#include "ColaUnidades.h"
#include <sstream>

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
void ListaUnidades<T>::setCabeza(NodoUnidades* pcabeza) {
	cabeza = pcabeza;
};

template <typename T>
bool ListaUnidades<T>::isListaVacia() {
	return getCabeza() == NULL;
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
void ListaUnidades<T>::eliminar() {
	lista.eliminar(getCabeza());
};

template <typename T>
std::string ListaUnidades<T>::toString() {
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

template <typename T>
void ListaUnidades<T>::reducirVida(int valor) {
	
};