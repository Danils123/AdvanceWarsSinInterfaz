#ifndef JUGADOR_H
#define JUGADOR_H
#include "Enums.h"

class Jugador
{
public:
	Jugador(int, int);
	~Jugador();
	Colores getColor();

	void setColor(int aColor);

	void setUnidades(int aUnidades);

	int getUnidades();
private:

	Colores color;
	int unidades;

};

#endif /* JUGADOR_H */
