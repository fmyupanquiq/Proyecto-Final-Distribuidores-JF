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
void Usuario::ModificarUser(){
		int op;
	cout<<"Selecciones una opcion para modificar[0-4]: "<<endl;
	cout<<"1. Nombre "<<endl;
	cout<<"2. Ruc"<<endl;
	cout<<"3. DNI"<<endl;
	cout<<"4. Celular"<<endl;
	cin>>op;
	cout<<endl;
	switch (op) {
		case 1:
			cin.ignore();
			cout<<"Ingrese el Nombre : ";
			getline(cin,NombreUser);
			break;
		case 2:
			cout<<"Ingrese el Ruc : ";
			cin>>Ruc;
			break;
		case 3:

			cin.ignore();
			cout<<"Ingrese el DNI : ";
			cin>>DNI;
			break;
		case 4:
			cout<<"Ingrese el celular : ";
			cin>>Celular;
			break;
		default:
			cout<<"opcion invalida ";
			break;
	}
}
