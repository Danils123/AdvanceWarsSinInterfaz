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
void Jugador<T>::setUnidades(int pUnidades) {
	this->unidades = pUnidades;
}

template <typename T>
int Jugador<T>::getUnidades() {
	return this->unidades;
}
template <typename T>
void Jugador<T>::registrarMovimiento() {

};

//std::string toString() {
//	return "";
//};