
#ifndef CASILLA_h
#define CASILLA_h

class Casilla
{
public:
	Casilla(int, int, bool, int);
	Casilla();
	~Casilla();

	int getX();

	void setX(int pX);

	int getY();

	void setY(int pY);

	bool getTieneUnidad();

	void setTieneUnidad(bool pTieneUnidad);

	int getJugador();

	void setJugador(int pJugador);

private:
	int x;
	int y;
	bool tieneUnidad;
	int jugador;
};

#endif
