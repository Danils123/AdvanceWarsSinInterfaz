// AdvancesSinInterfaz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListaUnidades.h"
#include "Juego.h"

int main()
{
	Juego juego;
	ListaUnidades unidades;
	unidades.setLista(1);
	unidades.insertar(1,5,3,1,0,0);
	unidades.insertar(2, 6, 4, 5, 1, 1);
	//juego.agregarGenerarMapa(3, 5);
	juego.agregarJugador(0,0);

    return 0;
}

