/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: drami
 *
 * Created on August 19, 2018, 9:58 AM
 */

#ifndef NODO_H
#define NODO_H

class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    
    void setInfo(int);
    void setSig(Nodo*);
private:
    int infos;
    Nodo* sig;
};

#endif /* NODO_H */

