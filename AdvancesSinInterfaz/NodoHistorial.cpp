#include "stdafx.h"
#include "NodoHistorial.h"


NodoHistorial::NodoHistorial(Historial registro)
{
	setRegistro(registro);
}

NodoHistorial::~NodoHistorial()
{
}

void NodoHistorial::setRegistro(Historial pRegistro) {
	registro = pRegistro;
};

void NodoHistorial::setSig(NodoHistorial* pSig) {
	sig = pSig;
};

Historial* NodoHistorial::getRegistro() {
	return &registro;
};


NodoHistorial* NodoHistorial::getSig() {
	return sig;
};
