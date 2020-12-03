#ifndef HOSPITAL_H_
#define HOSPITAL_H_

#include <iostream>
#include <string>

//Se incluyen las clases que usa Hospital.h
#include "Usuario.h"
#include "Cita.h"

using namespace std;

class Hospital{
	private:
	//Almacena el nombre del hospital
	string nombre;
	
	//Almacena la direccion del hospital
	string direccion;
	
	//Arreglo que almacena los usuarios
	Usuario usuario[100];
	
	//Indice de arreglo de usuarios
	int iuser;
	
	public:
	//Constructor
	Hospital(){
	  iuser = 4;
	};
	
	//Setters
	void setNombre(string);
	void setDireccion(string);
	
	//Getters
	string getNombre();
	string getDireccion();
	int getIuser();
	
	//Crea un usuario de ejemplo
	void creaEjemploUsario();
	
	//Agrega un usuario a la base de datos
	void agregaUsuario(string, string, int, int);
	
	//Busca un usuario por nombre en la base de datos
	void buscarUsuario(string);
	
	//Mostrar todos los usuarios registrados en el programa
	void muestraUsuario();
	
	//Mostrar la informacion del hospital
	void muestraInfo();
};

void Hospital::setNombre(string n){
	nombre = n;
}

void Hospital::setDireccion(string d){
	direccion = d;
}

string Hospital::getNombre(){
	return nombre;
}

string Hospital::getDireccion(){
	return direccion;
}

int Hospital::getIuser(){
  return iuser+1;
}

void Hospital::creaEjemploUsario(){
  Usuario aux0("Alberto Estrada","enero",3,11);
  Usuario aux1("Daniel Ortigoza","diciembre",16,7);
  Usuario aux2("Trinidad Trujillo","diciembre",22,8);
  Usuario aux3("Horacio Salinas","enero",10,7);
  Usuario aux4("Samantha Del Muro","diciembre",29,8);
  
  usuario[0] = aux0;
  usuario[1] = aux1;
  usuario[2] = aux2;
  usuario[3] = aux3;
  usuario[4] = aux4;
}

void Hospital::agregaUsuario(string name, string month, int day, int hour){
	iuser++;
	Usuario aux(name,month,day,hour);
	usuario[iuser] = aux;
}

void Hospital::buscarUsuario(string n){
  int aux = -1;
  for(int i = 0; i <= iuser; i ++){
		if(usuario[i].getNombre().compare(n) == 0)
		 aux = i;
		}
	if(aux != -1)
	 usuario[aux].toString();
	else
	 cout<<"\n El usuario ingresado no fue encontrado en la base de datos."<<endl;
	}

void Hospital::muestraUsuario(){
  for(int i = 0 ; i <= iuser ; i++){
		usuario[i].toString();
    }
}

void Hospital::muestraInfo(){
  cout<<endl;
  cout<<nombre<<endl;
  cout<<"Direccion: "<<direccion<<endl;
  cout<<"El numero de pacientes registrados es: "<<iuser+1<<endl;
}

class HospitalPrivado:public Hospital{
	private:
	//Almacena el costo de una cita en el hospital privado
	int precioCita;
	
	public:
  //Constructor default
  HospitalPrivado(){};
	
	//Ingresar el precio por cita
	void setPrecioCita(int);
	
	//Obtener el precio por cita
	int getPrecioCita();
	
	//Obtener los ingresos sumando el precio de cita de todos los usuarios
	void muestraIngresos();
};

void HospitalPrivado::setPrecioCita(int p){
	precioCita = p;
}

int HospitalPrivado::getPrecioCita(){
	return precioCita;
}

void HospitalPrivado::muestraIngresos(){
  float aux;
  aux = getIuser() * precioCita;
  cout<<"Los ingresos esperados son $"<<aux<<endl;
}

#endif