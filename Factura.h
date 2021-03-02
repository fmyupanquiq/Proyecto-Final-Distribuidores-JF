#include <iostream>
#include<conio.h>


using namespace std;

class Factura{
	public:
		float Total;
		char Fecha[];
		int NumOperacion;
		Usuario* usuario;
	private:
		void verFactura();
		void ModificarFactura();
		void CrearFactura();
	
};





