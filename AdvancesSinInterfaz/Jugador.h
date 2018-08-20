#ifndef JUGADOR_H
#define JUGADOR_H
#include "Enums.h"
#include "ListaUnidades.h"
#include <string>
using namespace std;

<<<<<<< HEAD

template <typename T>
=======
template <class T, class U>
>>>>>>> SinItnterfaz
class Jugador
{
public:
	//Jugador(int, int);
	//~Jugador();
	Colores getColor();

	void setColor(int);

	void setUnidades(ListaUnidades<T>*);

    ListaUnidades<Unidad>* getUnidades();

	void registrarMovimiento();
	
	template <class T>
	void inicializarListaUnidades();

	/*std::string toString();*/

private:

	Colores color;
	ListaUnidades<T, U> unidades;
};

#endif /* JUGADOR_H */
	