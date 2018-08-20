/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.cpp
 * Author: drami
 * 
 * Created on August 19, 2018, 9:58 AM
 */
#include "stdafx.h"
#include "Lista.h"
#include "Pila.h"
#include <sstream>
Lista::Lista() {
}

Lista::Lista(const Lista& orig) {
}

Lista::~Lista() {
}

void Lista::apilar(int info){
    Pila pila;
    pila.apilar(info, cabeza);
};
