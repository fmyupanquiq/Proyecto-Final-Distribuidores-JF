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
	system("cls");
			user.MostrarUser();
			cout<<"------------------------------------------------------------------------"<<endl;	
			user.ModificarUser();
		break;
		case 2:
				system("cls");
					cout<<left;
					cout<<setw(4)<<"N";
					cout<<setw(8)<<"Cod.";
					cout<<setw(10)<<"Stock";
					cout<<setw(22)<<"Nombre";
					cout<<setw(7)<<"Precio";
					cout<<setw(20)<<"Detalles";
					cout<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;	
		for(int k=1;k<i;k++){
		cout<<left<<setw(3)<<k;					
		Pro[k].MostrarProducto();
		cout<<endl;
	}
		cout<<"------------------------------------------------------------------------"<<endl;		
	cout<<"Que Producto desea : ";
	cin>>op;
	if(op>i-1){
		system("cls");
		cout<<"Error el producto que desea no existe , vuelva a selecionar "<<endl;
		system("pause");
	}
	else{
			c=1;
		do{
		
		system("cls");
					cout<<left;
					cout<<setw(8)<<"Cod.";
					cout<<setw(10)<<"Stock";
					cout<<setw(22)<<"Nombre";
					cout<<setw(7)<<"Precio";
					cout<<setw(20)<<"Detalles";
					cout<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;						
		Pro[op].MostrarProducto();
		cout<<endl;
		cout<<"\t Cantidad del producto : ";
		cin>>Des[h].cantidad;
		if((Des[h].cantidad==3) || (Des[h].cantidad==6) || (Des[h].cantidad==12) || (Des[h].cantidad==24) ){
			c=0;
			Des[h].producto(&Pro[op]);
			Pro[op].ActualizarCantidad(Des[h].cantidad );
			h++;
		}
			}while(c==1);
		break;
		case 3:
				if(i!=0){
			system("cls");
					cout<<left;
					cout<<setw(4)<<"N ";

					cout<<setw(22)<<"Nombre";
					cout<<setw(7)<<"Precio";
					cout<<setw(10)<<"Cantidad";
					cout<<setw(11)<<"SubTotal";
					cout<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;	
					for(int r=1;r<h;r++){
						cout<<left<<setw(4)<<r;	
					Des[r].ProductoDatos();		
					}
					system("pause");
			
			
		}
		else{
			cout<<"Aun no cuenta con productos en la factura "<<endl;
		}
		break;
		case 4:
		
		break;
	}
	
	return 0;
}
