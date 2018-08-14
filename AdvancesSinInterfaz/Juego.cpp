#include "stdafx.h"
#include "Juego.h"


Juego::Juego()
{
	this->agregarGenerarMapa(5, 10);
}


Juego::~Juego()
{
}

Casilla** Juego::getTerreno() 
{
	return this->terreno;
}

void Juego::setTerreno(Casilla** nTerreno)
{
	this->terreno = nTerreno;
}

ListaJugadores* Juego::getEquipoA() 
{
	return this->equipoA;
}

void Juego::setEquipoA(ListaJugadores* nEquipoA)
{
	this->equipoA = nEquipoA;
}

ListaJugadores* Juego::getEquipoB()
{
	return this->equipoB;
}

void Juego::setEquipoB(ListaJugadores* nEquipoB)
{
	this->equipoB = nEquipoB;
}

bool Juego::getIsGanador()
{
	return this->isGanador;
}

void Juego::setIsGanador(bool nIsGanador)
{
	this->isGanador = nIsGanador;
}

bool Juego::getTurno()
{
	return this->turno;
}

void Juego::setTurno(bool nTurno)
{
	this->turno = nTurno;
}

ColaHistorial* Juego::getHistorial()
{
	return this->historial;
}

void Juego::setHistorial(ColaHistorial* nHistorial)
{
	this->historial = nHistorial;
}

std::string Juego::atacar(int tipoUnidad, std::vector<int> pocisionAtacar)
{
	std::string resultado = "";
	return resultado;
}

bool Juego::mover(int equipo, int tipoUnidad, std::vector<int> pocisionAtacar)
{
	bool ataco = false;
	return ataco;
}

bool Juego::agregarJugador(int color, int equipo) 
{
	bool agregado = false;
	return agregado;
}

void Juego::agregarGenerarMapa(int cantFilas , int cantColumnas)
{
	Casilla** ntablero =  new Casilla*[cantFilas];
	for(int i = 0; i < cantFilas; i++)
	{
		ntablero[i] = new Casilla[cantColumnas];
		for(int j = 0; i< cantColumnas; j++)
		{
			ntablero[i][j] =  Casilla(i, j, false, 0);
		}
	}

	this->setTerreno(ntablero);
}

std::string Juego::obtenerEstadoJuego(int entero)
{
	std::string estado;
	return estado;
}