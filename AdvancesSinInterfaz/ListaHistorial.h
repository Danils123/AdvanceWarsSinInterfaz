#ifndef LISTAHISTORIAL_H
#define LISTAHISTORIAL_H
#include "Lista.h"
#include "NodoHistorial.h"
#include <string>
#include <vector>
template <typename T>
class ListaHistorial
{
public:
	NodoHistorial* getCabeza();
	void setCabeza(NodoHistorial*);
	bool isListaVacia();
	std::vector<NodoHistorial*> buscar(int);
	void insertar(int, std::vector<int>, int, int, int);
	void eliminar();
	std::string toString();
	void setLista(int);
	Historial setRegistro(int, std::vector<int>, int, int, int);
private:
	Lista< T > lista;
	NodoHistorial* cabeza;
};

#endif
