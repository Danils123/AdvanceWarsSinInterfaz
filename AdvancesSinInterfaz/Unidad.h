#ifndef UNIDAD_H
#define UNIDAD_H
#include "Enums.h"
class Unidad
{
public:
	Unidad();
	Unidad(int, int, int, int, int, int);
	~Unidad();

	void setVida(int);
	void setRango(int);
	void setTipo(int);
	void setPosX(int);
	void setPosY(int);
	void setEstado(bool);
	void setId(int);


	int getVida();
	int getRango();
	TipoUnidades getTipo();
	int getPosX();
	int getPosY();
	int getEstado();
	int getId();
private:
	int id;
	int vida;
	int rango;
	TipoUnidades tipo;
	int posX;
	int posY;
	bool estado;
};
#endif /* UNIDAD_H */
