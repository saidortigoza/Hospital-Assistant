#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>
#include <cstring>

//Se incluyen las clases que usa Usuario.h
#include "Cita.h"

using namespace std;

class Usuario{
	private:
	//Almacena el nombre del usuario
	string nombre;
	
	//Obtejo de tipo Cita que almacena la informacion de la fecha de la cita del usuario
	Cita cita;
	
	public:
	//Constructor default
  Usuario(){};
  
  //Constructor con parametros
	Usuario(string n,string m,int d,int h){
		nombre = n;
		cita = Cita(m,d,h);
	};
	
	//Ingresar el nombre del usuario
	void setNombre(string);
	
	//Desplegar el nombre del usuario
	string getNombre();
	
	//Desplegar la informacion de la cita
	void getInfoCita();
	
	//Desplegar toda la informacion del usuario (nombre y cita)
	void toString();
};

void Usuario::setNombre(string name){
		nombre = name;
	}
	
string Usuario::getNombre(){
	return nombre;
}

void Usuario::getInfoCita(){
	cita.citaToString();
}

void Usuario::toString(){
  cout <<"\n Nombre: "<<nombre<<endl;
	cita.citaToString();
  cout<<endl;
}

#endif