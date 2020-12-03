/*
 * Proyecto: Covid19 Assistant
 * Said Guadalupe Ortigoza Trujillo
 * A01707430
 */
 
/*
 * Este proyecto maneja la logística de usuarios que deseen registrar
 * una cita en el hospital, muestra los usuarios registrados, cuenta con
 * una opción de búsqueda de usuario así como de imprimir la información
 * del hospital.
 */
 
 #include <iostream>
 #include <cstring>
 
 using namespace std;
 
 //Se incluyen las clases
 #include "Hospital.h"
 #include "Usuario.h"
 #include "Cita.h"
 
 //Este es el menu principal de opciones que el usuario puede elegir
 void menu(){
	cout << " \nMenu\n";
	cout << " 1. Registrar nuevo usuario\n";
	cout << " 2. Buscar usuario\n";
	cout << " 3. Mostrar registro de usuarios\n";
	cout << " 4. Mostrar informacion del hospital.\n";
	cout << " 5. Salir del programa\n";
 }
 
 //Programa principal
 int main(){
	int opc,dia,hora;
	string nombreUsuario,mes;
	
	//Se crea el objeto de tipo hospital privado
	HospitalPrivado starMedica;
	
	//Se asigna la informacion del hospital
	starMedica.setNombre("Star Medica");
	starMedica.setDireccion("Blvd. Bernardo Quintana Arrioja 4060, Col. San Pablo, QRO.");
	starMedica.setPrecioCita(1500);
	starMedica.creaEjemploUsario();
	
	//Inicio del programa
	cout<<" Bienvenido al asistente de "<<starMedica.getNombre()<<". Por favor seleccione una opcion del menu que se muestra a continuacion."<<endl;
	
	while(opc < 5 && opc > -1){
		menu();
		cin>>opc;
    cin.ignore();
		
		switch(opc){
			case 1:
			cout<<"\n Por favor ingrese su nombre: ";
	    getline(cin, nombreUsuario);
		  
		  cout<<"\n Por favor ingrese el mes en el que desea agendar su cita: ";
		  getline(cin, mes);
		  
		  cout<<"\n Ingrese el dia: ";
		  cin>>dia;
		  
		  cout<<"\n Ingrese la hora: ";
		  cin>>hora;
		  
		  cout<<"\n Registro exitoso. Volviendo al menu principal..."<<endl;
			
			starMedica.agregaUsuario(nombreUsuario,mes,dia,hora);
			break;
		
			case 2:
			cout<<"\n Ingresa el nombre del usuario: ";
			getline(cin, nombreUsuario);
			
			starMedica.buscarUsuario(nombreUsuario);
			break;
			
			case 3:
			starMedica.muestraUsuario();
			break;
			
			case 4:
			starMedica.muestraInfo();
			starMedica.muestraIngresos();
			break;
		}
	}
 }