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
		void CrearFactura();
	
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
//int Descripcion::getnombre(Producto* po){
//	return po->GetNombre();
//}
void Descripcion::CrearFactura(){
	
	
}

