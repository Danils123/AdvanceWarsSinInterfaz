#include "stdafx.h"
#include "Jugador.h"

template <class T, class U>
Jugador<T, U>::Jugador() {

};
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
template <class T, class U>
void Jugador<T,  U>::setUnidades(int pUnidades) {
	this->unidades = pUnidades;
}

template <class T, class U>
int Jugador<T,  U>::getUnidades() {
	return this->unidades;
}
template <class T, class U>
void Jugador<T,  U>::registrarMovimiento() {

};

//std::string toString() {
//	return "";
//};