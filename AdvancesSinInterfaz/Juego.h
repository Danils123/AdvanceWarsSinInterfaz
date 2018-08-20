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
	template <class T, class U>
	Jugador<T, U>* getJugadorA();
	template <class T, class U>
	void setJugadorA(Jugador<T, U>*);
	template <class T, class U>
	Jugador<T, U>* getJugadorB();
	template <class T, class U>
	void setJugadorB(Jugador<T, U>*);
	bool getIsGanador();
	void setIsGanador(bool);
	bool getTurno();
	void setTurno(bool);
	template <class T, class U>
	ColaHistorial<T, U>* getHistorial();
	template <class T, class U>
	void setHistorial(ColaHistorial<T, U>*);
	template <class T, class U>
	std::string atacar(int, std::vector<int>);
	bool mover(int, int, std::vector<int>);
	template <class T, class U>
	bool agregarJugador(int, int);
	void agregarGenerarMapa(int,int);
	std::string obtenerEstadoJuego(int);
private:
	Casilla** terreno;
	template <class T, class U>
	Jugador<T, U>* jugadorA;
	template <class T, class U>
	Jugador<T, U>* jugadorB;
	bool isGanador;
	bool turno;
	template <class T, class U>
	ColaHistorial<T, U>* historial;
};

#endif /*JUEGO_H*/