#include "stdafx.h"
#include "ListaHistorial.h"
#include "PilaHistorial.h"
#include "ColaHistorial.h"
#include <vector>
template <typename T>
NodoHistorial* ListaHistorial<T>::getCabeza() {
	return cabeza;
};

template <typename T>
void ListaHistorial<T>::setCabeza(NodoHistorial* pCabeza) {
	cabeza = pCabeza;
};

template <typename T>
bool ListaHistorial<T>::isListaVacia() {
	return getCabeza() == NULL;
};

template <typename T>
std::vector<NodoHistorial*> ListaHistorial<T>::buscar(int jugador) {
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

template <typename T>
void ListaHistorial<T>::insertar(int jugador, std::vector<int> movimiento, int tipoUnidadAtacado, int tipoUnidadAtacante, int turno) {
	Historial registro = setRegistro(jugador, movimiento, tipoUnidadAtacado, tipoUnidadAtacante, turno);
	lista.insertar(registro, getCabeza());
};

template <typename T>
void ListaHistorial<T>::eliminar() {
	lista.eliminar();
};

template <typename T>
std::string ListaHistorial<T>::toString() {
	return " ";
};

template <typename T>
void ListaHistorial<T>::setLista(int tipo) {
	if (lista == NULL)
	{
		switch (tipo)
		{
		case 1:
			PilaHistorial pila;
			lista = pila;
			break;
		case 2:
			ColaHistorial cola;
			lista = cola;
			break;
		default:
			PilaHistorial pila;
			lista = pila;
			break;
		}
	}
};

template <typename T>
Historial ListaHistorial<T>::setRegistro(int jugador, std::vector<int> movimiento, int tipoUnidadAtacado, int tipoUnidadAtacante, int turno) {
	Historial registro;
	setJugador(jugador);
	setMovimiento(movimiento);
	setTipoUnidadAtacado(tipoUnidadAtacado);
	setTipoUnidadAtacante(tipoUnidadAtacante);
	setTurno(turno);

	return registro;
};

