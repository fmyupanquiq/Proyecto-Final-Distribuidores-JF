#include <iostream>
#include<conio.h>
#include <time.h>
#include <iomanip>
#include <limits>
using namespace std;

class Factura{
	public:
		int i=1;
		float Total;
		int NumOperacion;
		Usuario* usuario;
		Descripcion* Desc[30];
	public:
		void CrearFactura(int,Usuario* );
		void LeerDetalles(Descripcion*);
};
void Factura::LeerDetalles(Descripcion *desc){
	Desc[i]=desc;
	i++;
}
void Factura::CrearFactura(int h,Usuario *user){
	Total=0;
	usuario=user;
	ofstream archivo2;
		archivo2.open("Reporte.txt",ios::out|ios::ate);
		if(archivo2.is_open()){ 
		archivo2<<left;
		archivo2<<setw(8)<<"Cod";
		archivo2<<setw(22)<<"Nombre";
		archivo2<<setw(7)<<"Precio";
		archivo2<<setw(10)<<"Cantidad";
		archivo2<<setw(11)<<"SubTotal";
		archivo2<<endl;
			archivo2<<"------------------------------------------------------------------------"<<endl;
		for(int o=1;o<h;o++){
			archivo2<<left;
		archivo2<<setw(8)<<Desc[o]->GetCod();
		archivo2<<setw(22)<<Desc[o]->GetNombre ();
		archivo2<<setw(7)<<Desc[o]->GetPrecio();
		archivo2<<setw(10)<<Desc[o]->getCantidad();
		archivo2<<setw(11)<<setprecision(5)<<Desc[o]->GetSubTotal()<<endl;
		Total=Desc[o]->GetSubTotal()+Total;			
		}
		archivo2<<"------------------------------------------------------------------------"<<endl;
		 time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
 
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
		archivo2<<left;
		archivo2<<setw(37)<<buf<<setw(10)<<"Total : "<<setprecision(5)<<Total<<endl;
    	archivo2<<usuario->NombreUser<<" "<<usuario->DNI<<usuario->Celular<<" "<<usuario->DNI<<" "<<usuario->Ruc<<endl;
		}		
				archivo2.close();
				cout<<"Registro Exitoso"<<endl;

	
	
}




