#include "stdafx.h"
#include "Casilla.h"


Casilla::Casilla(int x, int y, bool tieneUnidades, int jugador)
{
	setJugador(jugador);
	setTieneUnidad(tieneUnidad);
	setX(x);
	setY(y);
}

Casilla::Casilla()
{
}

Casilla::~Casilla()
{
}

int Casilla::getX() {
	return this->x;
}

void Casilla::setX(int pX) {
	this->x = pX;
}

int Casilla::getY() {
	return this->y;
}

void Casilla::setY(int pY) {
	this->y = pY;
}

bool Casilla::getTieneUnidad() {
	return this->tieneUnidad;
}

void Casilla::setTieneUnidad(bool pTieneUnidad) {
	this->tieneUnidad = pTieneUnidad;
}

int Casilla::getJugador() {
	return this->jugador;
}

void Casilla::setJugador(int pJugador) {
	this->jugador = pJugador;
}

