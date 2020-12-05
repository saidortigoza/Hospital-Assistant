/*
 * Proyecto: Hospital Assistant
 * Said Guadalupe Ortigoza Trujillo
 * A01707430
 */
 
/*
 * La clase cita es un componente de la clase Usuario, esta almacena datos como
 * el mes, el dia y la hora de la cita, de los que puede disponer posteriormente
 * gracias a los metodos que contiene.
 */

#ifndef CITA_H_
#define CITA_H_
#include <iostream>

using namespace std;

//Declaracion de la clase Cita
class Cita{
	private:
	//Declaracion de las variables de instancia
	string mesCita;
	int diaCita;
	int horaCita;
	
	public:
   /*
    * Constructor default
    *
    * @param
    * @return
    */
	Cita(){};
	
	/*
    * Constructor con parametros
    *
    * @param string: m, int: d, int: h
    * @return
    */
	Cita(string m, int d, int h):mesCita(m),diaCita(d),horaCita(h){};
	
	//Metodos de la clase
	void citaToString();
};

/*
 * Utiliza los datos privados de la clase
 * para desplegarlos en una oracion que es mas
 * comprensible para el usuario.
 *
 * @param
 * @return string: mesCita, int: diaCita, int: horaCita
 */
void Cita::citaToString(){
	cout<<" Su cita esta programada para el dia "<<diaCita<<" de "<<mesCita<<" a las "<<horaCita<<" horas.";
}

#endif