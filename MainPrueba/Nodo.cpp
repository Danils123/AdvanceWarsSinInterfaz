/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.cpp
 * Author: drami
 * 
 * Created on August 19, 2018, 9:58 AM
 */
#include "stdafx.h"
#include "Nodo.h"

Nodo::Nodo() {
}

Nodo::Nodo(const Nodo& orig) {
}

Nodo::~Nodo() {
}

void Nodo::setInfo(int pinfo){
    infos = pinfo;
};
void Nodo::setSig(Nodo* nodo){
    sig = nodo;
};
