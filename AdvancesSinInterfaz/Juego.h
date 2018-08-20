#include "Casilla.h"
#include "ColaHistorial.h"
#include "Jugador.h"
#include <string>
#include <vector>
#ifndef JUEGO_H
#define JUEGO_H

Jugador <class T>;
class Juego
{
public:
	Juego();
	~Juego();
	Casilla** getTerreno();
	void setTerreno(Casilla**);
	Jugador<T>* getJugadorA();
	void setJugadorA(Jugador<T>*);
	Jugador<T>* getJugadorB();
	void setJugadorB(Jugador<T>*);
	bool getIsGanador();
	void setIsGanador(bool);
	bool getTurno();
	void setTurno(bool);
	ColaHistorial<Historial>* getHistorial();
	void setHistorial(ColaHistorial<Historial>*);
	std::string atacar(int, std::vector<int>);
	bool mover(int, int, std::vector<int>);
	bool agregarJugador(int, int);
	void agregarGenerarMapa(int,int);
	std::string obtenerEstadoJuego(int);
private:
	Casilla** terreno;
	Jugador<T>* jugadorA;
	Jugador<T>* jugadorB;
	bool isGanador;
	bool turno;
	ColaHistorial<T>* historial;
};

#endif /*JUEGO_H*/