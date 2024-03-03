#include "Clase Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombre,apellido,direccion,fecha_de_nacimiento;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombre: ";
	cin>>nombre;
	cout<<"Ingresar Apellido: ";
	cin>>apellido;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Fecha de Nacimiento: " <<endl;
	cin>>fecha_de_nacimiento;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//Instancia de un Objeto
	Cliente obj = Cliente(nombre,apellido,direccion,fecha_de_nacimiento,telefono,nit);
	obj.crear();
	obj.leer();
	obj.actualizar();
	obj.borrar();
}
