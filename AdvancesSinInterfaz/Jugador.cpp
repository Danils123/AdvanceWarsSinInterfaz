#include "stdafx.h"
#include "Jugador.h"

//
//Jugador::Jugador(int color, int unidades)
//{
//	setColor(color);
//	setUnidades(unidades);
//}
//
//
//Jugador::~Jugador()
//{
//}
template <typename T>
Colores Jugador<T>::getColor() {
	return this->color;
}

template <typename T>
void Jugador<T>::setColor(int pColor) {
	Colores colorP;
	switch (pColor)
	{
	case ROJO:
		colorP = ROJO;
		break;
	case VERDE:
		colorP = VERDE;
		break;
	case AZUL:
		colorP = AZUL;
		break;
	default:
		colorP = AMARRILLO;
		break;
	}

	color = colorP;
}
template <typename T>
void Jugador<T>::setUnidades(ListaUnidades<T>* pUnidades) {
	this->unidades = pUnidades;
}

template <typename T>
ListaUnidades<T>* Jugador<T>::getUnidades() {
	return this->unidades;
}
template <typename T>
void Jugador<T>::registrarMovimiento() {

};

template <class T>
void Jugador<T>::inicializarListaUnidades()
{
	ListaUnidades<T>* lista;
	lista->insertar(0, 5, 3, 0, 0, 0);
	lista->insertar(1, 3, 2, 1, 0, 1);
	lista->insertar(2, 7, 4, 2, 1, 0);
	this->setUnidades(lista);
}
//std::string toString() {
//	return "";
//};