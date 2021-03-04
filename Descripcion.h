#include <iostream>
#include<conio.h>
using namespace std;

class Descripcion{
	public:
		float SubTotal;
		int cantidad;
		Producto* Po;
	public:
		void producto(Producto *);
		void ProductoDatos();
		int getCantidad();
		float GetPrecio();
		float GetSubTotal();
		string GetNombre();
		int GetCod();	
};
int Descripcion::getCantidad(){
	return cantidad;
}
void Descripcion::producto(Producto *Pro ){
	Po=Pro;
	cout<<"Producto elegido correctamente"<<endl;
}
void Descripcion::ProductoDatos(){
	SubTotal=Po->GetPrecio() *cantidad;
	cout<<left;
	cout<<setw(22)<<Po->GetNombre();
	cout<<setw(7)<<Po->GetPrecio();
	cout<<setw(10)<<cantidad;
	cout<<setw(11)<<SubTotal;
	cout<<endl;
	
}
float Descripcion::GetPrecio(){
	return Po->GetPrecio();
}
string Descripcion::GetNombre(){
	return Po->GetNombre();
}
int Descripcion::GetCod(){
	return Po->GetCod();
}
float Descripcion::GetSubTotal(){
	return SubTotal;
}
