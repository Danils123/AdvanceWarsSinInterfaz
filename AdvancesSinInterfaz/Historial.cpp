#include "stdafx.h"
#include "Historial.h"
#include <sstream>
#include "Enums.h"

void Historial::setJugador(int pJugador) {
	jugador = pJugador;
};

void Historial::setMovimiento(std::vector<int> pPos) {
	movimiento = pPos;
};


void Historial::setTipoUnidadAtacado(int tipo) {
	tipoUnidadAtacado = tipo;
};


void Historial::setTipoUnidadAtacante(int tipo) {
	tipoUnidadAtacante = tipo;
};


void Historial::setTurno(int pTurno) {
	turno = pTurno;
};



int Historial::getJugador() {
	return jugador;
};


std::vector<int> Historial::getMovimiento() {
	return movimiento;
};


int Historial::getTipoUnidadAtacado() {
	return tipoUnidadAtacado;
};


int Historial::getTipoUnidadAtacante() {
	return tipoUnidadAtacante;
};


int Historial::getTurno() {
	return turno;
};

std::string Historial::toString() {
	std::ostringstream s;
	s << "----------------------------------";
	s << "\n";
	if (getJugador() == 1) {
		s << "Movimiento de jugador 1";
		s << "\n";
	}
	else {
		s << "Movimiento de jugador 2";
		s << "\n";
	}

	s << "Movimiento en la fila: ";
	s << getMovimiento()[0];
	s << " y en la columna: ";
	s << getMovimiento()[1];
	s << "\n";

	s << "Ficha atacante: " << TipoNames[getTipoUnidadAtacante()];
	s << "\n";

	s << "Ficha atacando: " << TipoNames[getTipoUnidadAtacado()];
	s << "\n";

	s << "Turno: " << getTurno();
	s << "----------------------------------";
	return s.str();
};
