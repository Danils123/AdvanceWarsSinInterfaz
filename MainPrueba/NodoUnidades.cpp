#include "stdafx.h"
#include "NodoUnidades.h"

NodoUnidades::NodoUnidades(){
};

NodoUnidades::NodoUnidades(Unidad unidad)
{
	setUnidad(unidad);
	setSig(NULL);
}


NodoUnidades::~NodoUnidades()
{
}


void NodoUnidades::setUnidad(Unidad pUnidad) {
	unidad = pUnidad;
};
void NodoUnidades::setSig(NodoUnidades* pSig) {
	sig = pSig;
};

Unidad* NodoUnidades::getUnidad() {
	return &unidad;
};
NodoUnidades* NodoUnidades::getSig() {
	return sig;
};