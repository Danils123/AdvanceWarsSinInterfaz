#include "Casilla.h"
#include "ColaHistorial.h"
#include "Jugador.h"
#include "Unidad.h"
#include "NodoUnidades.h"
#include "Historial.h"
#include "NodoHistorial.h"
#include <string>
#include <vector>
#ifndef JUEGO_H
#define JUEGO_H

class Juego
{
public:
	Juego();
	~Juego();
	Casilla** getTerreno();
	void setTerreno(Casilla**);
	Jugador getJugadorA();
	void setJugadorA(Jugador);
	Jugador getJugadorB();
	void setJugadorB(Jugador);
	bool getIsGanador();
	void setIsGanador(bool);
	bool getTurno();
	void setTurno(bool);
	ColaHistorial<Historial, NodoHistorial*>* getHistorial();
	void setHistorial(ColaHistorial<Historial, NodoHistorial*>*);
	std::string atacar(int, std::vector<int>);
	bool mover(int, int, std::vector<int>);
	bool agregarJugador(int, int);
	void agregarGenerarMapa(int,int);
	std::string obtenerEstadoJuego(int);
private:
	Casilla** terreno;
	Jugador jugadorA;
	Jugador jugadorB;
	bool isGanador;
	bool turno;
	int cantTurnos;
	ColaHistorial<Historial, NodoHistorial*>* historial;

};

#endif /*JUEGO_H*/