#include "Cliente.cpp"
#include <iostream>

using namespace std;

main(){
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	
	cout<< "Ingrese los datos Solicitados: "<<endl;
	cout<<"Ingrese su Nit: ";
	cin>> nit;
	cout<< "Ingrese nombres: ";
	cin>> nombres;
	cout<<"Ingrese apellidos: ";
	cin>> apellidos;
	cout<< "Ingrese direcion: ";
	cin>> direccion;
	cout<< "Ingrese telefono: ";
	cin>> telefono;
	
	Cliente obj = Cliente(nombres, apellidos, direccion, fecha_nacimiento, telefono, nit);
	cout<<"Datos del Cliente: "<<obj.getNit()<<" , "<<obj.getNombres()<<" , "<<obj.getApellidos()<<" , "<<obj.getDireccion()<<" , "<<obj.getTelefono()<<endl;
	
	system("pause");
}
