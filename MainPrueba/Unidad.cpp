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
	this->vida = pVida;
};

void Unidad::setRango(int pRango) {
	this->rango = pRango;
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

	this->tipo = tipoP;
};

void Unidad::setPosX(int pX) {
	this->posX = pX;
};

void Unidad::setPosY(int pY) {
	this->posY = pY;
};

void Unidad::setEstado(bool pEstado) {
	this->estado = pEstado;
};

void Unidad::setId(int pId) {
	this->id = pId;
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

int Unidad::getId() {
	return id;
};