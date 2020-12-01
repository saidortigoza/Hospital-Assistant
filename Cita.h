#ifndef CITA_H_
#define CITA_H_
#include <iostream>

using namespace std;

class Cita{
	private:
	string mes;
	int dia;
	int hora;
	
	public:
	//Constructor default
	Cita(){};
	//Constructor definido
	Cita(string m, int d, int h):mes(m),dia(d),hora(h){};
	//Funcion para imprimir la informacion de la cita
	void citaToString();
};

void Cita::citaToString(){
	cout<<" Su cita esta programada para el dia "<<dia<<" de "<<mes<<" a las "<<hora<<" horas."<<endl;
}

#endif