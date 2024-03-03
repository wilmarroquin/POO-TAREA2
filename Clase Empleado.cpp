#include "Clase Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
	//Atributos
	private : int codigo;
	
	//Constructor
	public :
	Empleado(){
	}
	Empleado(string p, string nom, string ap, string dir, string fn, int tel, int cod){
		codigo = cod;
		puesto = p;
	}
	//Metodos
	//Set (Sirven para modificar) (Se queda en una sola linea por estetica)
	void setCodigo(int co){codigo = co;}
	void setPuesto(string p){puesto = p;} 
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ap){apellidos = ap;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_de_nacimiento(string fn){fecha_de_nacimiento = fn;}
	void setTelefono(int tel){telefono = tel;}
	//get (sirven para mostrar) (Se queda en una sola linea por estetica)
	int getCodigo(){return codigo;}
	string getPuesto(){return puesto;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFecha_de_nacimiento(){return fecha_de_nacimiento;}
	int getTelefono(){return telefono;}
	//Metodo
	void crear(){
		cout<<"_______________________"<<endl;
		cout<<codigo<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_de_nacimiento<<","<<telefono<<endl;
		}
	void leer(){
		cout<<"_______________________"<<endl;
		cout<<codigo<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_de_nacimiento<<","<<telefono<<endl;
		}
	void actualizar(){
		cout<<"_______________________"<<endl;
		cout<<codigo<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_de_nacimiento<<","<<telefono<<endl;
		}
	void borrar(){
		cout<<"_______________________"<<endl;
		cout<<codigo<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_de_nacimiento<<","<<telefono<<endl;
		}	
};
