#ifndef JUGADOR_H
#define JUGADOR_H
#include "Enums.h"
#include "ListaUnidades.h"
#include <string>
using namespace std;

template <class T, class U>

class Jugador
{
public:
	Jugador();
	//Jugador(int, int);
	//~Jugador();
	Colores getColor();

	void setColor(int);

	void setUnidades(ListaUnidades<Unidad, NodoUnidades*>);

    ListaUnidades<Unidad, NodoUnidades*> getUnidades();

	void registrarMovimiento();
	
	//template <class T, class U>
	void inicializarListaUnidades(int);

	/*std::string toString();*/

private:

	Colores color;
	ListaUnidades<Unidad, NodoUnidades*> unidades;
};

#endif /* JUGADOR_H */
	