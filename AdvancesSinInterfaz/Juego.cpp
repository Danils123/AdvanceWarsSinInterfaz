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


Jugador<Unidad, NodoUnidades*> Juego::getJugadorA()
{
	return this->jugadorA;
}


void Juego::setJugadorA(Jugador<Unidad, NodoUnidades*> nJugadorA)
{
	this->jugadorA = nJugadorA;
}


Jugador<Unidad, NodoUnidades*> Juego::getJugadorB()
{
	return this->jugadorB;
}

void Juego::setJugadorB(Jugador<Unidad, NodoUnidades*> nJugadorB)
{
	this->jugadorB = nJugadorB;
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

ColaHistorial<Historial, NodoHistorial*> *Juego::getHistorial()
{
	return this->historial;
}

void Juego::setHistorial(ColaHistorial<Historial, NodoHistorial*>* nHistorial)
{
	this->historial = nHistorial;
}

std::string Juego::atacar(int tipoUnidad, std::vector<int> pocisionAtacar)
{
	std::string resultado = "";
	
	Jugador<Unidad, NodoUnidades*> jugadorActivo;

	if(this->turno)
	{
	
		jugadorActivo = this->getJugadorA();
	}
	else
	{
		
		jugadorActivo = this->getJugadorB();
	}

	
	Unidad *unidad = jugadorActivo.getUnidades().buscar(tipoUnidad)->getUnidad();
	

	return resultado;
}

bool Juego::mover(int equipo, int tipoUnidad, std::vector<int> pocisionMover)
{
	bool movio = false;
	
	return movio;
}


bool Juego::agregarJugador(int color, int equipo) 
{
	bool agregado = false;	
	Jugador<Unidad, NodoUnidades*> *jpunt;
	Jugador<Unidad, NodoUnidades*> jugador = this->getJugadorA();
	jpunt = &jugador;
	jugador.setColor(color);

	if(jpunt != NULL)
	{
		this->setJugadorB(jugador);
	}
	else 
	{
		this->setJugadorA(jugador);
	}
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