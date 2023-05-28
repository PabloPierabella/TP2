/*
 * Pieza.h
 *
 *  Created on: 28 may. 2023
 *      Author: Pablo Pierabella
 */

#ifndef PIEZA_H_
#define PIEZA_H_
#include <string>
class Pieza {
private:
	char tipo;
	std::string num_serie;
	int pos;

public:
	Pieza();
	virtual ~Pieza();
	//Constructor
	Pieza(char tipo,std::string num_serie,int pos);
	//funciones miembro
	void SetTipo(char a);
	void SetNum(std::string S);
	void SetPos(int P);
	char GetTipo();
	std::string GetNum();
	int GetPos();
};

#endif /* PIEZA_H_ */
