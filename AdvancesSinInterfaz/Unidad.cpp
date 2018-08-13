#include "stdafx.h"
#include "Unidad.h"


Unidad::Unidad(int vida, int rango, int tipo, int x, int y, int estado)
{
	setEstado(estado);
	setPosX(x);
	setPosY(y);
	setRango(rango);
	setTipo(tipo);
	setVida(vida);
}


Unidad::~Unidad()
{
}


void Unidad::setVida(int pVida) {
	vida = pVida;
};

void Unidad::setRango(int pRango) {
	rango = pRango;
};

void Unidad::setTipo(int pTipo) {
	TipoUnidades tipoP;
	switch (pTipo)
	{
	case AEREA:
		tipoP = AEREA;
		break;
	case TANQUE:
		tipoP = TANQUE;
		break;
	case SOLDADO:
		tipoP = SOLDADO;
		break;
	default:
		tipoP = SOLDADO;
		break;
	}

	tipo = tipoP;
};

void Unidad::setPosX(int pX) {
	posX = pX;
};

void Unidad::setPosY(int pY) {
	posX = pY;
};

void Unidad::setEstado(int pEstado) {
	estado = pEstado;
};

int Unidad::getVida() {
	return vida;
};

int Unidad::getRango() {
	return rango;
};

TipoUnidades Unidad::getTipo() {
	return tipo;
};

int Unidad::getPosX() {
	return posX;
};

int Unidad::getPosY() {
	return posY;
};

int Unidad::getEstado() {
	return estado;
};
