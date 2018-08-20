#ifndef HISTORIAL_H
#define HISTORIAL_H
#include <vector>
#include <sstream>
#include <list>

class Historial
{
public:
	void setJugador(int);
	void setMovimiento(std::vector<int>);
	void setTipoUnidadAtacado(int);
	void setTipoUnidadAtacante(int);
	void setTurno(int);

	int getJugador();
	std::vector<int> getMovimiento();
	int getTipoUnidadAtacado();
	int getTipoUnidadAtacante();
	int getTurno();
	std::string toString();
private:
	int jugador;
	std::vector<int> movimiento;
	int tipoUnidadAtacado;
	int tipoUnidadAtacante;
	int turno;
};

#endif
