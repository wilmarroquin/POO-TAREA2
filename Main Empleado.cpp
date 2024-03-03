#include "Clase Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string puesto,nombre,apellido,direccion,fecha_de_nacimiento;
	int codigo,telefono;
	
	cout<<"Ingresar El Puesto: ";
	cin>>puesto;
	cout<<"Ingresar Nombre: ";
	cin>>nombre;
	cout<<"Ingresar Apellido: ";
	cin>>apellido;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Fecha de Nacimiento: " <<endl;
	cin>>fecha_de_nacimiento;
	cout<<"Ingresar Codigo: ";
	cin>>codigo;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//Instancia de un Objeto
	Empleado obj = Empleado(nombre,apellido,direccion,fecha_de_nacimiento,telefono,puesto,codigo);
	obj.crear();
	obj.leer();
	obj.actualizar();
	obj.borrar();
}
