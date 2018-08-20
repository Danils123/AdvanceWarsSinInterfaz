#include "stdafx.h"
#include "ListaHistorial.h"

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
NodoHistorial* ListaHistorial<T>::buscar(int) {
	NodoHistorial* aux = getCabeza();
	while (aux != NULL) {
		if (aux->getRegistro() == id) {
			return aux;
		}
		aux = aux->getSig();
	};
	return NULL;
};

template <typename T>
void ListaHistorial<T>::insertar(int, int, int, int, int, int) {

};

template <typename T>
void ListaHistorial<T>::eliminar() {

};

template <typename T>
std::string ListaHistorial<T>::toString() {

};

template <typename T>
void ListaHistorial<T>::setLista(int) {

};

template <typename T>
Historial ListaHistorial<T>::setRegistro(int, int, int, int, int, int) {

};

