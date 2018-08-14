#ifndef LISTAUNIDADES_H
#define LISTAUNIDADES_H
#include "Lista.h"

template <typename T>
class ListaUnidades
{
public:
	ListaUnidades();
	~ListaUnidades();

private:
	Lista< T > lista;
};


#endif
