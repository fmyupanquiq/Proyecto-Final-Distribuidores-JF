#include <iostream>
#include<conio.h>

using namespace std;

class Usuario{
	public:
		string NombreUser;
		int Ruc;
		int DNI;
		int Celular;	
	public:
		void MostrarUser();
		void ModificarUser();		
	
};
void Usuario::MostrarUser(){
	cout<<"1. Nombre: "<<NombreUser<<endl;
	cout<<"2. RUC: "<<Ruc<<endl;
	cout<<"3. DNI: "<<DNI<<endl;
	cout<<"4. Celular: "<<Celular<<endl;
}