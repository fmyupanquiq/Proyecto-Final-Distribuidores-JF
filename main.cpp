#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>  // formato de salida 
#include "Producto.h"
#include "Usuario.h"
#include "Factura.h"
#include "Descripcion.h"
using namespace std;

int main(){
	Producto Pro[50];
	Descripcion Des[50];
	Usuario user;
	Factura Fact;
	int i=0,h=1,c;
	int op;
		string Nombre;
		int Stock;
		float Precio;
		int Codigo;
		string Descripcion;	
	ifstream archivo; // Apertura 
	archivo.open("inventario.txt");
	if(archivo.is_open()){    //retorna falso , en caso de que no exista
	while(!archivo.eof()){
		i++;
	archivo>>Codigo>>Stock>>Nombre>>Precio;	
	getline(archivo,Descripcion);
	if(Codigo==15){
			archivo.close();
	}
	Pro[i].Codigo=Codigo;
	Pro[i].Stock=Stock;
	Pro[i].Descripcion=Descripcion;
	Pro[i].Precio=Precio;
	Pro[i].Nombre=Nombre;


	}
	archivo.close();	
	}
	else{
		cout<<"ERROR AL CARGAR LOS DATOS ,VERIFIQUE SU INVENTARIO";
	}

					cout<<"--------------------------------------------------------------------------------"<<endl;
				cout<<"---                            Registro de Usuario                           ---"<<endl;
				cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"Nombre : ";
		getline(cin,user.NombreUser);
	cout<<"Ruc : ";
	cin>>user.Ruc;
	cout<<"DNI : ";
	cin>>user.DNI;
	cout<<"Celular : ";
	cin>>user.Celular;

	int cen,b=1;	
	while(b==1){
	system("cls");
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t. Modificar Usuario"<<endl;
	cout<<"\t\t\t2. Ver Productos "<<endl;
	cout<<"\t\t\t3. Ver Factura"<<endl;
	cout<<"\t\t\t4. Terminar el proceso "<<endl;	
	cout<<"Selecciones una opcion [1-4]: ";
	cin>>cen;

	switch(cen){
		case 1:

		break;
		case 2:

		break;
		case 3:

		break;
		case 4:
		
		break;
	}
	
	return 0;
}
