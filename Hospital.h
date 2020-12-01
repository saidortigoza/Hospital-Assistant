#ifndef HOSPITAL_H_
#define HOSPITAL_H_

#include <iostream>
#include <cstring>

#include "Usuario.h"
#include "Cita.h"

using namespace std;

class Hospital{
	private:
	//Almacena el nombre del hospital
	string nombre;
	//Almacena la direccion del hospital
	string direccion;
	
	Usuario usuario[100];
	int iuser;
	
	public:
	//Constructor default
	Hospital(){
		nombre = "";
		direccion = "";
		iuser = -1;
	}
	//Constructor definido
	Hospital(string n, string d):nombre(n),direccion(d){};
	//Setters
	void setNombre(string);
	void setDireccion(string);
	//Getters
	string getNombre();
	string getDireccion();
	//Imprimir el numero de usuarios y sus nombres
	
	void agregaUsuario();
	
	void buscarUsuario(string);
	
	void getInfoUsuarios();
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

void Hospital::agregaUsuario(){
	iuser += 1;
	string name,mes;
	int opcion,dia,hora;
	
	cout<<"\n Por favor ingrese su nombre: ";
	getline(cin, name);
	usuario[iuser].setNombre(name);
	cout<<endl;
	cout<<" Bienvenido "<<usuario[iuser].getNombre()<<endl;
	
	cout<<"\n A continuacion respondera un breve cuestionario acerca de su estado de salud. Le pedimos responder con honestidad.\n";
	cout<<" Si ha sentido o padecido alguno de los siguientes sintomas en los ultimos 15 dias ingrese una (s), si no, por favor ingrese una (n)\n";
	
	usuario[iuser].setSintomas();
	usuario[iuser].realizarDiagnostico();
	
	cout<<"\n ¿Desea agendar una cita? (1=Si)/(2=No)\n";
	cin>>opcion;
	if(opcion == 1){
		cout<<"\n Por favor ingrese el mes en el que desea agendar su cita: ";
		cin>>mes;
		cout<<"\n Ingrese el dia: ";
		cin>>dia;
		cout<<"\n Ingrese la hora: ";
		cin>>hora;
		usuario[iuser].setInfoCita(mes,dia,hora);
		
		cout<<"\n Su cita ha sido registrada con exito. A continuacion se muestra la informacion de su cita: "<<endl;
		usuario[iuser].getInfoCita();
	}
	else
		cout<<"\n Volviendo al menu principal..."<<endl;
}

void Hospital::buscarUsuario(string n){
	string aux = n;
  for(int i = 0; i<=iuser; i ++){
		if(strcmp(usuario[i].c_str(),aux) == 0)
			usuario[i].toString();
		else
			cout<<"El usuario "<<n<<" no fue encontrado en la base de datos."<<endl;
	}
}

class HospitalPrivado:public Hospital{
	private:
	//Almacena el costo de una cita en el hospital privado
	int precioCita;
	
	public:
	//Ingresar el precio por cita
	void setPrecioCita(int);
	//Obtener el precio por cita
	int getPrecioCita();
	//Obtener los ingresos sumando el precio de cita de todos los usuarios
	void getIngresoTotal();
};

void HospitalPrivado::setPrecioCita(int p){
	precioCita = p;
}

int HospitalPrivado::getPrecioCita(){
	return precioCita;
}

#endif