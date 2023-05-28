/*
 * Pieza.cpp
 *
 *  Created on: 28 may. 2023
 *      Author: Pablo Pierabella
 */

#include "Pieza.h"
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include <iostream>
#include <cstdlib> // Para la función rand
#include <ctime>   // Para la función time
#include <cstring> // Para la función strlen

Pieza::Pieza() {
    // TODO Auto-generated constructor stub

    //GENERAR TIPO ALEATORIO
    char Aux[6] = "ABCDE";
    std::srand(std::time(nullptr));
    int i = std::rand() % 5;
    tipo = Aux[i];

    //GENERAR NUMERO DE SERIE ALEATORIO
    const std::string Aux2 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    num_serie = ""; // Inicializar num_serie como una cadena vacía

    for (int j = 0; j < 10; j++) {
        i = std::rand() % Aux2.length();
        num_serie += Aux2[i]; // Concatenar el carácter aleatorio a num_serie
    }

    //GENERAR POSICIONAMIENTO CORRECTO ALEATORIO
    i =rand() % 2;
    pos = i;
}

Pieza::Pieza(char t,std::string n,int p){
	tipo=t;
	num_serie=n;
	pos=p;
}

void Pieza::SetTipo(char a){
	tipo = a;
}

void Pieza::SetNum(std::string S){
	num_serie = S;
}

void Pieza::SetPos(int P){
	pos = P;
}

char Pieza::GetTipo(){
	return tipo;
}

std::string Pieza::GetNum(){
	return num_serie;
}

int Pieza::GetPos(){
	return pos;
}

Pieza::~Pieza() {
	// TODO Auto-generated destructor stub
}
