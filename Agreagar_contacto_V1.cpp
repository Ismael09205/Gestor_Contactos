#include<iostream>
#include<vector>
#include<fstream>
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

void llenar_archivo(){
	ofstream archivo_contactos;
	archivo_contactos.open("lista_contactos.txt",ios::out);
	if (archivo_contactos.fail()){
		cout<<"El archivo no pudo se pudo abrir";
		return;	
	}
	archivo_contactos<<c.nombre_contacto<<"|"<<c.apellido_contacto<<"|"<<c.telefono<<"|"<<c.correo<<"|"<<c.direccion<<"|"<<c.apodo<<"|"<<c.cumpleaños<<endl;	
	archivo_contactos.close();
}

int main(){
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
					cout<<"Ingrese el telefono del contacto que desea agregar: ";
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
					cout<<"Ingrese el correo del contacto que desea agregar: ";
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
					cout<<"Ingrese la direccion del contacto que desea agregar: ";
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
					cout<<"Ingrese el cumpleaños del contacto que desea agregar: ";
					getline(cin,c.cumpleaños);
				if (!c.cumpleaños.empty()){
					break;
				}
				}
			}		
	
		contactos.push_back(c);
		llenar_archivo();
		
		
	}
	




	
	


	
	
