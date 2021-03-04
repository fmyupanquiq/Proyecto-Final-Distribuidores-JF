#include <iostream>
#include<conio.h>
#include <iomanip> 
using namespace std;
using std::cout; using std::endl;
using std::string; 
class Producto{
	public:
		string  Nombre;
		int Stock;
		float Precio;
		int Codigo;
		string Descripcion;	
	public:
		void MostrarProducto();
		void ActualizarCantidad(int );
		int GetStock();
		float GetPrecio();
		string GetNombre();
		int GetCod();		
	
};
void Producto::MostrarProducto(){
	cout<<left;
	cout<<setw(8)<<Codigo;
	cout<<setw(10)<<Stock;
	cout<<setw(22)<<Nombre;
	cout<<setw(7)<<Precio;
	cout<<setw(20)<<Descripcion;
	cout<<endl;
}
void Producto::ActualizarCantidad(int k){
	Stock=Stock-k;
	
}
int Producto::GetStock(){
	return Stock;
}
float Producto::GetPrecio(){
	return Precio;
}
string Producto::GetNombre(){
	return Nombre;
}
int Producto::GetCod(){
	return Codigo;
}

