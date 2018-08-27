#include "stdafx.h"
#include "ListaUnidades.h"
#include "Unidad.h"
#include "PilaUnidades.h"
#include "ColaUnidades.h"
#include <sstream>

ListaUnidades::ListaUnidades()
{
	setCabeza(NULL);
}

NodoUnidades* ListaUnidades::getCabeza() {
	return cabeza;
};

void ListaUnidades::setCabeza(NodoUnidades* pcabeza) {
	cabeza = pcabeza;
};

bool ListaUnidades::isListaVacia() {
	return getCabeza() == NULL;
};

NodoUnidades* ListaUnidades::buscar(int id) {
	NodoUnidades* aux = getCabeza();
	while (aux != NULL) {
		if (aux->getUnidad()->getId() == id) {
			return aux;
		}
		aux = aux->getSig();
	};
	return NULL;
};

void ListaUnidades::insertar(int pId, int pVida, int pRango, int pTipo, int pPosX, int pPosY) {
	Unidad unidad(pId, pVida, pRango, pTipo, pPosX, pPosY);
	setCabeza(lista->insertar(unidad, getCabeza()));
};

void ListaUnidades::eliminar() {
	setCabeza(lista->eliminar(getCabeza()));
};

std::string ListaUnidades::toString() {
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
			aux = aux->getSig();
		};
	}
	else {
		s << "Lista vacia";
	}
	return s.str();
};

void ListaUnidades::setLista(int tipo) {
	if (lista == NULL)
	{
		PilaUnidades<Unidad, NodoUnidades*> *pila = new PilaUnidades<Unidad, NodoUnidades*>;
		ColaUnidades<Unidad, NodoUnidades*>* cola = new ColaUnidades<Unidad, NodoUnidades*>;

		switch (tipo)
		{
		case 1:
			lista = pila;
			break;
		case 2:
			lista = cola;
			break;
		/*default:
			PilaUnidades<Unidad, NodoUnidades*>* pila;
			lista = pila;
			break;*/
		}
	}
};

void ListaUnidades::reducirVida(int valor) {
	
};