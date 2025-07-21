#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
struct info_contactos{
	string nombre_contacto;
	string apellido_contacto;
	string telefono;
	string correo;
	string direccion;
	string apodo;
	string cumpleaños;

};
vector<info_contactos> contactos;
info_contactos c;
int main(){
	for(int i=0;i<7;i++){
	cout<<"Ingrese el nombre del contacto que desea agregar: ";
	getline(cin,c.nombre_contacto);
	if(c.nombre_contacto.empty()){
		while(true){
			cout<<"El campo no puede estar vacio"<<endl;
			cout<<"Ingrese el nombre del contacto que desea agregar: ";
			getline(cin,c.nombre_contacto);
		if (!c.nombre_contacto.empty()){
			break;
		}
		}
	}
	cout<<"Ingrese el apellido del contacto que desea agregar: ";
		getline(cin,c.apellido_contacto);
		if(c.apellido_contacto.empty()){
			while(true){
				cout<<"El campo no puede estar vacio"<<endl;
				cout<<"Ingrese el apellido del contacto que desea agregar: ";
				getline(cin,c.apellido_contacto);
			if (!c.apellido_contacto.empty()){
				break;
			}
			}
		}
	cout<<"Ingrese el telefono del contacto que desea agregar: ";
			getline(cin,c.telefono);
			if(c.telefono.empty()){
				while(true){
					cout<<"El campo no puede estar vacio"<<endl;
					cout<<"Ingrese el apellido del contacto que desea agregar: ";
					getline(cin,c.telefono);
				if (!c.telefono.empty()){
					break;
				}
				}
			}
	cout<<"Ingrese el correo del contacto que desea agregar: ";
			getline(cin,c.correo);
			if(c.correo.empty()){
				while(true){
					cout<<"El campo no puede estar vacio"<<endl;
					cout<<"Ingrese el apellido del contacto que desea agregar: ";
					getline(cin,c.correo);
				if (!c.correo.empty()){
					break;
				}
				}
			}
	cout<<"Ingrese la direccion del contacto que desea agregar: ";
			getline(cin,c.direccion);
			if(c.direccion.empty()){
				while(true){
					cout<<"El campo no puede estar vacio"<<endl;
					cout<<"Ingrese el apellido del contacto que desea agregar: ";
					getline(cin,c.direccion);
				if (!c.direccion.empty()){
					break;
				}
				}
			}
	cout<<"Ingrese el apodo del contacto que desea agregar: ";
	getline(cin,c.apodo);
	
	cout<<"Ingrese el cumpleaños del contacto que desea agregar: ";
			getline(cin,c.cumpleaños);
			if(c.cumpleaños.empty()){
				while(true){
					cout<<"El campo no puede estar vacio"<<endl;
					cout<<"Ingrese el apellido del contacto que desea agregar: ";
					getline(cin,c.cumpleaños);
				if (!c.cumpleaños.empty()){
					break;
				}
				}
			}		
			
		
		
		
	}
}


	
	


	
	
