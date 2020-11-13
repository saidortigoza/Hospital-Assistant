/*
 * Proyecto Restaurante
 * Said Guadalupe Ortigoza Trujillo
 * A01707430
 *
 * Este proyecto es el borrador del proyecto final de un restaurante.
 *
 */

#include <iostream>
#include <string>

using namespace std;

class Cliente{
	private:
	//Atributos
	string nombre;
	int mesa;
	
	public:
	//Constructores
	Cliente(){};
};

class Pedido{
	private:
	//Atributos
	string nombre;
	int cantidad;
	float precio;
	
	public:
	//Constructores
	Pedido(){};
	//Metodos
	float total_cuenta(float precio, int cantidad);
};

class PagoEmpleados{
	private:
	//Atributos
	string nombre;
	int horas_trabajadas;
	int pago_por_hora;
	
	public:
	//Contructores
	PagoEmpleados(){};
	//Metodos
	float nomina(int horas_trabajadas, int pago_por_hora);
};