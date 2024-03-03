#include <iostream>
using namespace std;

class Persona{
	//Atributos Nombres, Apellidos, Direccion, Fecha de Nacimiento & Telefono
	protected : string nombres, apellidos, direccion, fecha_de_nacimiento;
			int telefono;
	//Constructor
	Persona(){
	}
	Persona(string nom, string ap, string dir, string fn, int tel){
		nombres = nom;
		apellidos = ap;
		direccion = dir;
		fecha_de_nacimiento = fn;
		}
	//metodos
	void crear();
	void leer();
	void actualizar();
	void borrar();
};
