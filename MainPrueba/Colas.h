
#ifndef COLAS_H
#define COLAS_H
#include "stdafx.h"
#include "Lista.h"

#include <string>
using namespace std;

template <class T, class U>
class Colas : public Lista <T, U>
{

public:
	virtual void encolar(T, U) = 0;
	virtual void descolar(U) = 0;
};

#endif
