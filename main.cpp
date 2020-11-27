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
 
 #include "Asistente.h"
 #include "Diagnostico.h"
 #include "Hospital.h"
 
 //Este es el menu principal de opciones que el usuario puede elegir
 void menu(){
	cout << " Menu:\n";
	cout << " 1. Registrar nuevo usuario\n";
	cout << " 2. Registrar nuevo hospital\n";
	cout << " 3. Buscar usuario por ID\n";
	cout << " 4. Mostrar lista de hospitales\n";
	cout << " 5. Registrar cita\n";
	cout << " 6. Mostrar registro de usuarios\n";
	cout << " 7. Salir del programa\n";
 }
 
 int main(){
	int opcion = 0,idUsuario;
	string nombreUsuario,nombreHospital;
	
	while(opcion < 7 && opcion > -1){
		//El menu se va a imprimir de forma continua
		menu();
		cin >> opcion;
		
		switch(opcion){
			case 1:
			cout << "Ingresa el nombre del usuario";
			getline(cin, nombreUsuario);
			asistente.registrarUsuario(nombreUsuario);
			break;
			
			case 2:
			cout << "Ingresa el nombre del hospital";
			getline(cin, nombreHospital);
			asistente.registrarHospital(nombreHospital);
			break;
			
			case 3:
			cout << "Ingresa el ID del usuario: ";
			cin >> idUsuario;
			asistente.buscarUsuario(idUsuario);
			break;
			
			case 4:
			asistente.mostrarHospitales();
			break;
			
			case 5:
			cout << "Ingresa el ID del usuario: ";
			cin >> idUsuario;
			asistente.registrarCita(idUsuario);
			break;
			
			case 6:
			asistente.mostrarUsuarios();
			break;
		}
	}
 }