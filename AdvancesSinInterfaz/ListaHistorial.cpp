#include "stdafx.h"
#include "ListaHistorial.h"
#include "PilaHistorial.h"
#include "ColaHistorial.h"
#include <vector>
template <class T, class U>
NodoHistorial* ListaHistorial<T, U>::getCabeza() {
	return cabeza;
};

template <class T, class U>
void ListaHistorial<T, U>::setCabeza(NodoHistorial* pCabeza) {
	cabeza = pCabeza;
};

template <class T, class U>
bool ListaHistorial<T, U>::isListaVacia() {
	return getCabeza() == NULL;
};

template <class T, class U>
std::vector<NodoHistorial*> ListaHistorial<T, U>::buscar(int jugador) {
	NodoHistorial* aux = getCabeza();
	std::vector<NodoHistorial*> historialJugador;
	if (!isListaVacia()) {
		while (aux != NULL) {
			if (aux->getRegistro()->getJugador() == id) {
				historialJugador.push_back(aux->getRegistro());
			}
			aux = aux->getSig();
		};
	}
	else {
		return {};
	}
	
	return historialJugador;
};

template <class T, class U>
void ListaHistorial<T, U>::insertar(int jugador, std::vector<int> movimiento, int tipoUnidadAtacado, int tipoUnidadAtacante, int turno) {
	Historial registro = setRegistro(jugador, movimiento, tipoUnidadAtacado, tipoUnidadAtacante, turno);
	setCabeza(lista->insertar(registro, getCabeza()));
};

template <class T, class U>
void ListaHistorial<T, U>::eliminar() {
	setCabeza(lista->eliminar());
};

template <class T, class U>
std::string ListaHistorial<T, U>::toString() {
	return " ";
};

template <class T, class U>
void ListaHistorial<T, U>::setLista(int tipo) {
	if (lista == NULL)
	{
		switch (tipo)
		{
		case 1:
			PilaHistorial* pila;
			lista = &pila;
			break;
		case 2:
			ColaHistorial* cola;
			lista = &cola;
			break;
		default:
			PilaHistorial* pila;
			lista = &pila;
			break;
		}
	}
};

template <class T, class U>
Historial ListaHistorial<T, U>::setRegistro(int jugador, std::vector<int> movimiento, int tipoUnidadAtacado, int tipoUnidadAtacante, int turno) {
	Historial registro;
	registro.setJugador(jugador);
	registro.setMovimiento(movimiento);
	registro.setTipoUnidadAtacado(tipoUnidadAtacado);
	registro.setTipoUnidadAtacante(tipoUnidadAtacante);
	registro.setTurno(turno);

	return registro;
};

