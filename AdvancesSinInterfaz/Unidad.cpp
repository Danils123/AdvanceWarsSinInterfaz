#include "stdafx.h"
#include "Unidad.h"

Unidad::Unidad() {
	setId(0);
	setEstado(true);
	setPosX(0);
	setPosY(0);
	setRango(1);
	setTipo(1);
	setVida(100);
};

Unidad::Unidad(int id, int vida, int rango, int tipo, int x, int y)
{
	setId(id);
	setEstado(true);
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

void Unidad::setEstado(bool pEstado) {
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

void Unidad::setId(int pId) {
	id = pId;
};

int Unidad::getId() {
	return id;
};