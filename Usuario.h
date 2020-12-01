#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>
#include <cstring>

#include "Cita.h"

using namespace std;

class Usuario{
	private:
	//Almacena el nombre del usuario
	string nombre;
	//Arreglo de sintomas para usar el ciclo for
	string sintomas[13] = {"Tos: ","Cansancio: ","Fiebre: ","Malestar general: ","Dolor de garganta: ","Diarrea: ","Conjuntivitis: ","Dolor de cabeza: ","Perdida del olfato o gusto: ","Erupciones: ","Falta de aire: ","Dolor en el pecho: ","Incapacidad para hablar o moverse: "};
	//Arreglo de las opciones ingresadas por el usuario
	string s[13];
	//Obtejo de tipo Cita que almacena la informacion de la fecha de la cita del usuario
	Cita cita;
	
	public:
	//Constructor default
	Usuario(){};
	
	//Ingresar el nombre del usuario
	void setNombre(string);
	//Desplegar el nombre del usuario
	string getNombre();
	//Ingresar los sintomas del usuario
	void setSintomas();
	//Realizar la valoracion del diagnostico
	void realizarDiagnostico();
	//Ingresar la informacion de la cita
	void setInfoCita(string, int, int);
	//Desplegar la informacion de la cita
	void getInfoCita();
	
	void toString();
};

void Usuario::setNombre(string name){
		nombre = name;
	}
	
string Usuario::getNombre(){
	return nombre;
}
	
void Usuario::setSintomas(){
	char opc;
	for (int i = 0; i < 13; i++){
		cout<<"\n"<<sintomas[i];
		cin>>opc;
		s[i]=opc;
	}
}

void Usuario::realizarDiagnostico(){
	int cont_comunes = 0, cont_graves = 0;
	
	for (int i = 0; i <= 9; i++)
		if(strcmp(s[i].c_str(),"s") == 0)
			cont_comunes++;
	for (int j = 10; j <= 12; j++)
		if(strcmp(s[j].c_str(),"s") == 0)
			cont_graves++;
	
	if(cont_graves >= 1){
		cout<<" \nSu diagnostico indica que presenta sintomas graves de COVID-19.\n";
		cout<<" Es urgente que busque ayuda medica y se realice una prueba confirmatoria.\n";
	}
	
	else if(cont_comunes >= 2){
		cout<<" \nSu diagnostico indica que presenta sintomas leves que podrian tratarse de COVID-19.\n";
		cout<<" Le recomendamos seguir las siguientes recomendaciones:\n";
		cout<<" - Quedate en casa y evita en la medida de lo posible el contacto con otras personas.\n";
		cout<<" - Utiliza cubrebocas cuando estes cerca de otros.\n";
		cout<<" - Limpia las superficies que tocas con frecuencia.\n";
		cout<<" - Lavate las manos con frecuencia.\n";
		cout<<" - Evita compartir objetos personales.\n";
	}
	
	else{
		cout<<" \nSu diagnostico indica que no presenta sintomas.\n";
		cout<<" Le recomendamos seguir las siguientes recomendaciones:\n";
		cout<<" - Mantener la sana distancia de 1.5 metros.\n";
		cout<<" - Lavarse las manos con agua y jabon.\n";
		cout<<" - Utilizar gel con base de alcohol al 70% varias veces al dia.\n";
		cout<<" - Usar cubrebocas al salir de casa.\n";
	}
}

void Usuario::setInfoCita(string m, int d, int h){
	cita = Cita(m,d,h);
}

void Usuario::getInfoCita(){
	cita.citaToString();
}

void Usuario::toString(){
  cout <<nombre<<endl;
	cita.citaToString();
  cout<<endl;
}

#endif