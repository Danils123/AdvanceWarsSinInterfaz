#include "stdafx.h"
#include "Jugador.h"

Jugador::Jugador() {

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

void Jugador::setUnidades(ListaUnidades pUnidades) {
	this->unidades = pUnidades;
}


ListaUnidades Jugador::getUnidades() {
	return this->unidades;
}

void Jugador::registrarMovimiento() {

};

void Jugador::inicializarListaUnidades(int nJugador)
{
	ListaUnidades lista;
	int posInX = 0;
	int posInY = 0;

	if(nJugador == 2)
	{
		posInX = 3;
		posInY = 5;

		lista.insertar(0, 5, 3, 0, posInX, posInY);
		lista.insertar(1, 3, 2, 1, posInX, posInY - 1);
		lista.insertar(2, 7, 4, 2, posInX -1, posInY);
		this->setUnidades(lista);
	}
	else
	{
		lista.insertar(0, 5, 3, 0, posInX, posInY);
		lista.insertar(1, 3, 2, 1, posInX, posInY + 1);
		lista.insertar(2, 7, 4, 2, posInX + 1, posInY);
		this->setUnidades(lista);
	}
	
}
//std::string toString() {
//	return "";
//};