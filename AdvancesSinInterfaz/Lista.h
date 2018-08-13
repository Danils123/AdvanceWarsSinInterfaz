
#ifndef LISTA_H
#define LISTA_H
template <typename T>
class Lista
{

public:
	virtual T getCabeza() = 0;
	virtual void setCabeza(T aCabeza) = 0;
};

#endif
