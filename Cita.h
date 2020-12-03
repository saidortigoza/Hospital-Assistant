#ifndef CITA_H_
#define CITA_H_
#include <iostream>

using namespace std;

class Cita{
	private:
	//Almacena el mes de la cita
	string mesCita;
	
	//Almacena el dia de la cita
	int diaCita;
	
	//Almacena la hora de la cita
	int horaCita;
	
	public:
	//Constructor default
	Cita(){};
	
	//Constructor con parametros
	Cita(string m, int d, int h):mesCita(m),diaCita(d),horaCita(h){};
	
	//Funcion para imprimir la informacion de la cita
	void citaToString();
};

void Cita::citaToString(){
	cout<<" Su cita esta programada para el dia "<<diaCita<<" de "<<mesCita<<" a las "<<horaCita<<" horas.";
}

#endif