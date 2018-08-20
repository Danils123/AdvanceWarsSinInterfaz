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
	Jugador<Unidad,NodoUnidades*> getJugadorA();
	void setJugadorA(Jugador<Unidad, NodoUnidades*>);
	Jugador<Unidad, NodoUnidades*> getJugadorB();
	void setJugadorB(Jugador<Unidad, NodoUnidades*>);
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
	Jugador<Unidad, NodoUnidades*> jugadorA;
	Jugador<Unidad, NodoUnidades*> jugadorB;
	bool isGanador;
	bool turno;
	int cantTurnos;
	ColaHistorial<Historial, NodoHistorial*>* historial;

};

#endif /*JUEGO_H*/