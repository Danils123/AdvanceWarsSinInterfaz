#ifndef JUGADOR_H
#define JUGADOR_H
#include "Enums.h"
#include "ListaHistorial.h"
#include <string>
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
	int unidades;
	ListaHistorial* historial;
};

#endif /* JUGADOR_H */
