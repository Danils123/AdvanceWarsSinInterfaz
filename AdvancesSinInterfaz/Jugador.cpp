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
template <class T, class U>
Colores Jugador<T,  U>::getColor() {
	return this->color;
}

template <class T, class U>
void Jugador<T,  U>::setColor(int pColor) {
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
<<<<<<< HEAD
template <typename T>
void Jugador<T>::setUnidades(ListaUnidades<Unidad>* pUnidades) {
	this->unidades = pUnidades;
}

template <typename T>
ListaUnidades<Unidad>* Jugador<T>::getUnidades() {
=======
template <class T, class U>
void Jugador<T,  U>::setUnidades(int pUnidades) {
	this->unidades = pUnidades;
}

template <class T, class U>
int Jugador<T,  U>::getUnidades() {
>>>>>>> SinItnterfaz
	return this->unidades;
}
template <class T, class U>
void Jugador<T,  U>::registrarMovimiento() {

};

template <class T>
void Jugador<T>::inicializarListaUnidades(int nJugador)
{
	ListaUnidades<T>* lista;
	int posInX = 0;
	int posInY = 0;

	if(nJugador == 2)
	{
		posInX = 3;
		posInY = 5;

		lista->insertar(0, 5, 3, 0, posInX, posInY);
		lista->insertar(1, 3, 2, 1, posInX, posInY - 1);
		lista->insertar(2, 7, 4, 2, posInX -1, posInY);
		this->setUnidades(lista);
	}
	
	lista->insertar(0, 5, 3, 0, posInX, posInY);
	lista->insertar(1, 3, 2, 1, posInX, posInY + 1);
	lista->insertar(2, 7, 4, 2, posInX + 1, posInY);
	this->setUnidades(lista);
}
//std::string toString() {
//	return "";
//};