#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>
using namespace std;

struct fumigacion{
	int tiposervicio;
	float descuento;
	float precio;
	float  totalhecta;
	float descuento2;
	float td;  
};

void fumigacions();
void ventas();
int main(){
	fumigacions();
	
}

void fumigacions(){
	int tiposervicio;
	float descuento;
	float precio;
	float  totalhecta;
	float descuento3;
	float descuento2;
	float td; 
	string s; 
		
	cout << "-------INGRESE TIPO DE SERVICIO-------------" << endl;
	cout << "SERVICIO HIERBA MALA Q10.00 * HEC -> 1 " << endl;	
	cout << "SERVICIO LANGOSTAS  Q20.00 * HEC ->	2" << endl;	
	cout << "SERVICIO GUSANOS  Q30.00 * HEC  -> 3  " << endl;	
	cout << "SERVICIO TODOS LOS ANTERIORES Q50.00 * HEC -> 4 " << endl;   
	cin >> tiposervicio;
	cout  << "Cuantas hectarias desea fumigar: "  << endl;
	cin >> totalhecta; 
	
	if (tiposervicio ==1){
	
		descuento = 10 * totalhecta;
		td= descuento;
		if (totalhecta>=500){
			descuento2= descuento * 0.95;
			td=descuento2;
		}else if (totalhecta<500)
			descuento2= totalhecta * 10;
			td= descuento2;
		
		if(descuento2>= 1500){
			td= descuento2 *0.90;
			
		}else if(descuento2<1500){
			td=descuento2;
			
			}
			
		cout<<"el total a pagar es:"<< endl;
		cout<<td;
	}
	
	else if (tiposervicio ==2){
	
		descuento = 20 * totalhecta;
		td= descuento;
		if (totalhecta>=500){
			descuento2= descuento * 0.95;
			td=descuento2;
		}else if (totalhecta<500)
			descuento2= totalhecta * 10;
			td= descuento2;
		
		if(descuento2>= 1500){
			td= descuento2 *0.90;
			
		}else if(descuento2<1500){
			td=descuento2;
			
			}
			
		cout<<"el total a pagar es:"<< endl;
		cout<<td;
}
	
	else if (tiposervicio ==3){
	
		descuento = 30 * totalhecta;
		td= descuento;
		if (totalhecta>=500){
			descuento2= descuento * 0.95;
			td=descuento2;
		}else if (totalhecta<500)
			descuento2= totalhecta * 10;
			td= descuento2;
		
		if(descuento2>= 1500){
			td= descuento2 *0.90;
			
		}else if(descuento2<1500){
			td=descuento2;
			
			}
			
		cout<<"el total a pagar es:"<< endl;
		cout<<td;
	}
	
	else if (tiposervicio ==4){
	
		descuento = 50 * totalhecta;
		td= descuento;
		if (totalhecta>=500){
			descuento2= descuento * 0.95;
			td=descuento2;
		}else if (totalhecta<500)
			descuento2= totalhecta * 10;
			td= descuento2;
		
		if(descuento2>= 1500){
			td= descuento2 *0.90;
			
		}else if(descuento2<1500){
			td=descuento2;
			
			}
		
		cout<<"el total a pagar es:"<< endl;
		cout<<td;
	}
	


	ofstream grabararchivo;
	try {
		grabararchivo.open("fumigar.txt",ios::app);
		grabararchivo<<tiposervicio<<"\t"<<totalhecta<<"\t"<<td<<endl;
		grabararchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
	
	cout<<"\n"<<"fumigaciones actuales:"<<endl;
	cout<<"tipo	hect	total"<<endl;
	ifstream leerarchivo;
	try {
		leerarchivo.open("fumigar.txt",ios::in);				
		while (getline(leerarchivo, s))
			cout<<s<<endl;		
		leerarchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
}

