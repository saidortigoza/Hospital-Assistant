/*
 * Proyecto: Hospital Assistant
 * Said Guadalupe Ortigoza Trujillo
 * A01707430
 */

/*
 * La clase Hospital maneja grupos de usuarios (100 en este caso)
 * que reservan una cita en el hospital, y hereda a una segunda 
 * clase llamada Hospital privado.
 */


#ifndef HOSPITAL_H_
#define HOSPITAL_H_

#include <iostream>
#include <string>

//Se incluyen las clases que usa Hospital.h
#include "Usuario.h"
#include "Cita.h"

using namespace std;

//Declaracion de la clase Hospital
class Hospital{
	private:
	//Declaracion de las variables de instancia
	string nombre;
	string direccion;
	Usuario usuario[100];
	int iuser;
	
	public:
	/*
    * Constructor default
    *
    * @param
    * @return
    */
	Hospital(){
	  iuser = 4;
	};
	
	//Metodos de la clase
	void setNombre(string);
	void setDireccion(string);
	string getNombre();
	string getDireccion();
	int getIuser();
	void creaEjemploUsario();
	void agregaUsuario(string, string, int, int);
	void buscarUsuario(string);
	void muestraUsuario();
	void muestraInfo();
};

/*
 * setter nombre
 *
 * @param string: n
 * @return
 */
void Hospital::setNombre(string n){
	nombre = n;
}

/*
 * setter direccion
 *
 * @param string: d
 * @return
 */
void Hospital::setDireccion(string d){
	direccion = d;
}

/*
 * getter nombre
 *
 * @param
 * @return string: nombre
 */
string Hospital::getNombre(){
	return nombre;
}

/*
 * getter direccion
 *
 * @param
 * @return string: direccion
 */
string Hospital::getDireccion(){
	return direccion;
}

/*
 * getter indice de usuarios
 *
 * @param
 * @return int: iuser + 1
 */
int Hospital::getIuser(){
  return iuser+1;
}

/*
 * Utliza el arreglo de tipo Usuario
 * Llena el arreglo con 5 ejemplos de usuarios con sus respectivas fechas de cita
 *
 * @param
 * @return
*/
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

/*
 * Utiliza arreglo de usuarios y su ultimo indice
 * Recibe el nombre, el mes, el dia y la hora de su cita
 * El metodo crea el objeto PorHora y lo agrega al arreglo
 *
 * @param string: name, string: month, int: day, int: hour
 * @return
 */
void Hospital::agregaUsuario(string name, string month, int day, int hour){
	iuser++;
	Usuario aux(name,month,day,hour);
	usuario[iuser] = aux;
}

/*
 * Utiliza arreglo de usuarios para comparar el nombre con el ingresado
 * Recibe el nombre del usuario a buscar
 * El metodo imprime la informacion del usuario en caso de ser encontrado
 * si no, se imprime de igual manera
 *
 * @param string: n
 * @return
 */
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

/*
 * Utiliza el arreglo de usuarios y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
 *
 * @param
 * @return
*/
void Hospital::muestraUsuario(){
  for(int i = 0 ; i <= iuser ; i++){
		usuario[i].toString();
    }
}

/*
 * Utiliza las variables instanciadas en la clase
 * que se encuentran almacenadas de forma privada
 * para desplegar informacion en pantalla
 *
 * @param
 * @return
*/
void Hospital::muestraInfo(){
  cout<<endl;
  cout<<nombre<<endl;
  cout<<"Direccion: "<<direccion<<endl;
  cout<<"El numero de pacientes registrados es: "<<iuser+1<<endl;
}

//Declaracion de la clase HospitalPrivado
class HospitalPrivado:public Hospital{
	private:
	//Declaracion de las variables de instancia
	int precioCita;
	
	public:
   /*
    * Constructor default
    *
    * @param
    * @return
    */
    HospitalPrivado(){};
	
	//Metodos de la clase
	void setPrecioCita(int);
	int getPrecioCita();
	void muestraIngresos();
};

/*
 * setter precioCita
 *
 * @param int: p
 * @return
 */
void HospitalPrivado::setPrecioCita(int p){
	precioCita = p;
}

/*
 * getter precioCita
 *
 * @param
 * @return int: precioCita
 */
int HospitalPrivado::getPrecioCita(){
	return precioCita;
}

/*
 * Utiliza las variables instanciadas en la clase
 * que se encuentran almacenadas de forma privada
 * para desplegar informacion en pantalla
 *
 * @param
 * @return
 */
void HospitalPrivado::muestraIngresos(){
  float aux;
  aux = getIuser() * precioCita;
  cout<<"Los ingresos esperados son $"<<aux<<endl;
}

#endif