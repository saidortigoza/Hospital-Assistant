/*
 * Proyecto: Hospital Assistant
 * Said Guadalupe Ortigoza Trujillo
 * A01707430
 */
 
/*
 * La clase usuario maneja los nombres de los pacientes que acuden al
 * hospital, y maneja un componente de la clase cita.
 */

#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>
#include <cstring>

//Se incluyen las clases que usa Usuario.h
#include "Cita.h"

using namespace std;

//Declaracion de la clase usuario
class Usuario{
	private:
	//Declaracion de las variables de instancia
	string nombre;
	Cita cita;
	
	public:
   /*
    * Constructor default
    *
    * @param
    * @return
    */
    Usuario(){};
  
    /*
    * Constructor con parametros
    *
    * @param string: n, string: m, int: d, int: h
    * @return
    */
	Usuario(string n,string m,int d,int h){
		nombre = n;
		cita = Cita(m,d,h);
	};
	
	//Metodos de la clase
	void setNombre(string);
	string getNombre();
	void getInfoCita();
	void toString();
};

/*
 * setter nombre
 *
 * @param string: name
 * @return
 */
void Usuario::setNombre(string name){
		nombre = name;
	}
	
/*
 * getter nombre
 *
 * @param
 * @return string: nombre
 */
string Usuario::getNombre(){
	return nombre;
}

/*
 * getter de la informacion de la cita del usuario
 *
 * @param
 * @return metodo de la clase cita para desplegar la informacion
 */
void Usuario::getInfoCita(){
	cita.citaToString();
}

/*
 * Imprime los valores de instancia en cadenas de texto
 *
 * @param
 * @return string: nombre, metodo de la clase cita para desplegar informacion
 */
void Usuario::toString(){
  cout <<"\n Nombre: "<<nombre<<endl;
  cita.citaToString();
  cout<<endl;
}

#endif
