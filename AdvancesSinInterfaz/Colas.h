
#ifndef COLAS_H
#define COLAS_H
#include "stdafx.h"
#include "Lista.h"

#include <string>
using namespace std;

template <typename T>
class Colas : public Lista <T>
{

public:
	virtual void encolar(T) = 0;
	virtual void descolar(T) = 0;
};

#endif
