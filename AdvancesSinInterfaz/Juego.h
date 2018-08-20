#include "Casilla.h"
#include "ListaJugadores.h"
#include "ColaHistorial.h"
#include "Jugador.h"
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
	Jugador getEquipoA();
	void setEquipoA(Jugador);
	Jugador getEquipoB();
	void setEquipoB(Jugador);
	bool getIsGanador();
	void setIsGanador(bool);
	bool getTurno();
	void setTurno(bool);
	ColaHistorial* getHistorial();
	void setHistorial(ColaHistorial*);
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
	ColaHistorial* historial;
};

#endif /*JUEGO_H*/