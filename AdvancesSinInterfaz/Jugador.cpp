#include "stdafx.h"
#include "Jugador.h"


Jugador::Jugador(int color, int unidades)
{
	setColor(color);
	setUnidades(unidades);
}


Jugador::~Jugador()
{
}

Colores Jugador::getColor() {
	return this->color;
}

void Jugador::setColor(int pColor) {
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

void Jugador::setUnidades(int pUnidades) {
	this->unidades = pUnidades;
}

int Jugador::getUnidades() {
	return this->unidades;
}

void registrarMovimiento() {

};

//std::string toString() {
//	return "";
//};