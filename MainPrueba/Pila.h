/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pila.h
 * Author: drami
 *
 * Created on August 19, 2018, 10:01 AM
 */

#ifndef PILA_H
#define PILA_H
#include "Nodo.h"

class Pila {
public:
    void apilar(int pinfo, Nodo* ultimo){
        Nodo* nuevo = new Nodo();
		nuevo->setInfo(pinfo);
		nuevo->setSig(NULL);
        nuevo->setSig(ultimo);
        ultimo = nuevo;
    };
private:

};

#endif /* PILA_H */

