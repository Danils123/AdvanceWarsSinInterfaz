#ifndef JUGADOR_H
#define JUGADOR_H
#include "Enums.h"
#include "ListaUnidades.h"
#include <string>
using namespace std;

template <typename T>
class Jugador
{
public:
	//Jugador(int, int);
	//~Jugador();
	Colores getColor();

	void setColor(int);

	void setUnidades(int);

	int getUnidades();

	void registrarMovimiento();

	/*std::string toString();*/

private:

	Colores color;
	ListaUnidades<T>* unidades;
};

#endif /* JUGADOR_H */
	