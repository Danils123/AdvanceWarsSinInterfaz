/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: drami
 *
 * Created on August 19, 2018, 9:58 AM
 */

#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
class Lista {
public:
    Lista();
    Lista(const Lista& orig);
    virtual ~Lista();
    void apilar(int);
    Nodo* cabeza;
private:
    
};

#endif /* LISTA_H */

