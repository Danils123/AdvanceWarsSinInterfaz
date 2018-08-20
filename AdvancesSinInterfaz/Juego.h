#include "Casilla.h"
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
	template <class T>
	Jugador<T> getJugadorA();
	template <class T>
	void setJugadorA(Jugador<T>);
	template <class T>
	Jugador<T> getJugadorB();
	template <class T>
	void setJugadorB(Jugador<T>);
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
	template <class T>
	Jugador<T> jugadorA;
	template <class T>
	Jugador<T> jugadorB;
	bool isGanador;
	bool turno;
	template <class T>
	ColaHistorial<T>* historial;
};

#endif /*JUEGO_H*/