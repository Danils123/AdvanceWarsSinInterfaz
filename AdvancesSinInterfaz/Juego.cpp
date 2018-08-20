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

template <class T, class U>
Jugador<T, U>* Juego::getJugadorA()
{
	return this->jugadorA;
}

template <class T, class U>
void Juego::setJugadorA(Jugador<T, U>* nJugadorA)
{
	this->jugadorA = nJugadorA;
}

template <class T, class U>
Jugador<T, U>* Juego::getJugadorB()
{
	return this->jugadorB;
}

template <class T, class U>
void Juego::setJugadorB(Jugador<T, U>* nJugadorB)
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

template <class T, class U>
ColaHistorial<T, U>* Juego::getHistorial()
{
	return this->historial;
}

template <class T, class U>
void Juego::setHistorial(ColaHistorial<T, U>* nHistorial)
{
	this->historial = nHistorial;
}

template <class T, class U>
std::string Juego::atacar(int tipoUnidad, std::vector<int> pocisionAtacar)
{
	std::string resultado = "";
	
	Jugador<T, U>* jugadorActivo;

	if(this->turno)
	{
		//template <class T, class U>
		jugadorActivo = this->getJugadorA();
	}
	else
	{
		//template <class T, class U>
		jugadorActivo = this->getJugadorB();
	}

	//template <class T, class U>
	Unidad* unidad = jugadorActivo->getUnidades()->buscar(tipoUnidad)->getUnidad();
	

	return resultado;
}

bool Juego::mover(int equipo, int tipoUnidad, std::vector<int> pocisionMover)
{
	bool movio = false;
	
	return movio;
}

template <class T, class U>
bool Juego::agregarJugador(int color, int equipo) 
{
	bool agregado = false;	
	Jugador<T, U> *jugador = new Jugador<T, U>;
	jugador->setColor(color);
	if(this->getJugadorA() != NULL)
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