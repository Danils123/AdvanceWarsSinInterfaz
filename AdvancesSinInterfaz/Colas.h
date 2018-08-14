
#ifndef COLAS_H
#define COLAS_H
#include "stdafx.h"
#include "Lista.h"

#include <string>
using namespace std;
template <typename T>

class Colas : public Lista<T>
{

public:
	virtual void encolar(T);
	virtual void descolar(T);
};

#endif
