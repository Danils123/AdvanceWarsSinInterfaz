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
	Jugador(int, int);
	~Jugador();
	Colores getColor();

	void setColor(int);

	void setUnidades(int);

	int getUnidades();

	void registrarMovimiento();

	/*std::string toString();*/

private:

	Colores color;
	ListaUnidades<T, U> unidades;
};

#endif /* JUGADOR_H */
