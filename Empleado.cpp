#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	
	private : string CodigoEmpleado;
			  string Puesto; 
			  
			  public : 
			  Cliente (){
			  }
			  
			  Cliente(string nom, string ape,string fn, string dir, int tel, string codemp, string pu) : Persona(nom,ape,dir,fn,tel){
			  	CodigoEmpleado = codemp;
			  	Puesto = pu;
			  	
			  }
		void mostrar() {
		cout<<"__________________________"<<endl;
		cout<<CodigoEmpleado<<","<<Puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}	
};
