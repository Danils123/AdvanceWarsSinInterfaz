
#ifndef COLAS_H
#define COLAS_H
#include "stdafx.h"
#include "Lista.h"

#include <string>
using namespace std;

<<<<<<< HEAD
template <typename T>
class Colas : public Lista <T>
=======
template <class T, class U>
class Colas : public Lista <T, U>
>>>>>>> SinItnterfaz
{

public:
	virtual void encolar(T, U) = 0;
	virtual void descolar(U) = 0;
};

#endif
