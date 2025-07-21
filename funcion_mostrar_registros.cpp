#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void mostrar_contactos(){
	ifstream archivo_contactos("lista_contactos.txt");
	string linea;
	
	cout<<"\n--- Contactos Registrados --\n";
	while (getline(archivo_contactos, linea)){
		size_t pos = 0;
		string datos [7];
		int i = 0;
		
		while ((pos = linea.find("|")) != string::npos && i < 7){
			datos[i++] = linea. substr(0, pos);
			linea.erase(0, pos+1);
		}
		datos [i] = linea;
		
		cout<<"Nombre: "<<datos [0]<<endl;
		cout<<"Apellido: "<<datos [1]<<endl;
		cout<<"Telefono: "<<datos [2]<<endl;
		cout<<"Correo: "<<datos [3]<<endl;
		cout<<"Direccion: "<<datos [4]<<endl;
		cout<<"Apodo: "<<datos [5]<<endl;
		cout<<"Cumpleaños: "<<datos [6]<<endl;
		cout<<"--------------------------\n";	
	}
	archivo_contactos.close();
	
}
