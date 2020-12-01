/*
 * Proyecto: Covid19 Assistant
 * Said Guadalupe Ortigoza Trujillo
 * A01707430
 */
 
/*
 * Este proyecto maneja la logística de usuarios que deseen obtener
 * un valoración rápida y permite registrar una cita en una lista 
 * predeterminada de hospitales.
 */
 
 #include <iostream>
 #include <cstring>
 
 using namespace std;
 
 #include "Hospital.h"
 #include "Usuario.h"
 #include "Cita.h"
 
 //Este es el menu principal de opciones que el usuario puede elegir
 void menu(){
	cout << " \nMenu\n";
	cout << " 1. Registrar nuevo usuario\n";
	cout << " 2. Buscar usuario";
	cout << " 3. Registrar cita\n";
	cout << " 4. Mostrar registro de usuarios\n";
	cout << " 5. Mostrar informacion del hospital.";
	cout << " 6. Salir del programa\n";
 }
 
 int main(){
	int opcion;
	string nombreUsuario;
	
	//Se crea el objeto de tipo hospital
	HospitalPrivado starMedica;
	
	//Se asigna la informacion del hospital
	starMedica.setNombre("Star Medica");
	starMedica.setDireccion("Blvd. Bernardo Quintana Arrioja 4060, Col. San Pablo, QRO.");
	starMedica.setPrecioCita(1500);
	
	cout<<" Bienvenido al asistente de "<<starMedica.getNombre()<<". Por favor seleccione una opcion del menu que se muestra a continuacion."<<endl;
	
	while(opcion < 6 && opcion > -1){
		//El menu se va a imprimir de forma continua
		menu();
		cin>>opcion;
		
		switch(opcion){
			case 1:
			starMedica.agregaUsuario();
			break;
			
			case 2:
			cout<<"Ingresa el nombre del usuario: ";
			getline(cin, nombreUsuario);
			starMedica.buscarUsuario(nombreUsuario);
			break;
		}
	}
 }