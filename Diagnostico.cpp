#include <iostream>
#include <cstring>

using namespace std;

class Diagnostico{
	private:
	//Almacena el nombre del usuario
	string nombre;
	//Arreglo de sintomas para usar el ciclo for
	string sintomas[13] = {"Tos: ","Cansancio: ","Fiebre: ","Malestar general: ","Dolor de garganta: ","Diarrea: ","Conjuntivitis: ","Dolor de cabeza: ","Perdida del olfato o gusto: ","Erupciones: ","Falta de aire: ","Dolor en el pecho: ","Incapacidad para hablar o moverse: "};
	//Arreglo de las opciones ingresadas por el usuario
	string s[13];
	
	public:
	//Constructor default
	Diagnostico(){};
	
	//Ingresar el nombre del usuario
	void setNombre(string);
	//Desplegar el nombre del usuario
	string getNombre();
	//Ingresar los sintomas del usuario
	void setSintomas();
	//Realizar la valoracion del diagnostico
	void realizarDiagnostico();
	
};

void Diagnostico::setNombre(string name){
		nombre = name;
	}
	
string Diagnostico::getNombre(){
	return nombre;
}
	
void Diagnostico::setSintomas(){
	char opc;
	for (int i = 0; i <= 13; i++){
		cout<<"\n"<<sintomas[i];
		cin>>opc;
		s[i]=opc;
	}
}

void Diagnostico::realizarDiagnostico(){
	int cont_comunes = 0, cont_graves = 0;
	
	for (int i = 0; i <= 9; i++)
		if(strcmp(s[i].c_str(),"s") == 0)
			cont_comunes++;
	for (int j = 10; j <= 12; j++)
		if(strcmp(s[j].c_str(),"s") == 0)
			cont_graves++;
	if(cont_comunes >= 2){
		cout<<"Su diagnostico indica que presenta sintomas leves que podrian tratarse de COVID-19.\n";
		cout<<"Le recomendamos seguir las siguientes recomendaciones:\n";
		cout<<"- Quedate en casa y evita en la medida de lo posible el contacto con otras personas.\n";
		cout<<"- Utiliza cubrebocas cuando estes cerca de otros.\n";
		cout<<"- Limpia las superficies que tocas con frecuencia.\n";
		cout<<"- Lavate las manos con frecuencia.\n";
		cout<<"- Evita compartir objetos personales.\n";
	}
	else if(cont_graves >= 1){
		cout<<"Su diagnostico indica que presenta sintomas graves de COVID-19.\n";
		cout<<"Es urgente que busque ayuda medica y se realice una prueba confirmatoria.\n";
	}
	else{
		cout<<"Su diagnostico indica que no presenta sintomas.\n";
		cout<<"Le recomendamos seguir las siguientes recomendaciones:\n";
		cout<<"- Mantener la sana distancia de 1.5 metros.\n";
		cout<<"- Lavarse las manos con agua y jabon.\n";
		cout<<"- Utilizar gel con base de alcohol al 70% varias veces al dia.\n";
		cout<<"- Usar cubrebocas al salir de casa.\n";
	}
}

int main(){
	string name;
	int resultado;
	//Se crea un objeto de tipo Diagnostico para la consulta del usuario
	Diagnostico usuario;
	
	cout<<"Bienvenido. Por favor ingrese su nombre: ";
	getline(cin, name);
	usuario.setNombre(name);
	
	cout<<"\nA continuacion respondera un breve cuestionario acerca de su estado de salud. Le pedimos responder con honestidad.\n";
	cout<<"Si ha sentido o padecido alguno de los siguientes sintomas en los ultimos 15 dias ingrese una (s), si no, por favor ingrese una (n)\n";
	
	usuario.setSintomas();
	usuario.realizarDiagnostico();
	
	return 0;
}