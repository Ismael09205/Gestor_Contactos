#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main(){
	string buscarContacto;
	cout<<"Ingrese el nombre y apellido del contacto a modificar o actualizar: ";
	getline(cin, buscarContacto);
	
	ifstream archivo("lista_contactos.txt");
	ofstream actual("lista_actualizada.txt");
	
	if (!archivo || !actual){
		cout<<"Error al ingresar al archivo.\n";
		return 1;
	}
	
	string linea;
	bool encontrado= false;
	
	while (getline(archivo, linea)){
		stringstream ss(linea);
		string campos[7];
		for(int i=0; i<7;i++){
			getline(ss, campos[i], '|' );   //Observacion
		}
		
		if (campos[0]==buscarContacto){
			cout<<"\nModificando contacto...\n";
			cout<<"Ingrese los datos para actualizar:\n";
			cout<<"Nombre: ";
			getline(cin, campos[0]);
			
			cout<<"Apellido: ";
			getline(cin, campos[1]);
			
			cout<<"Teléfono: ";
			getline(cin, campos[2]);
			
			cout<<"Correo: ";
			getline(cin, campos[3]);
			
			cout<<"Dirección: ";
			getline(cin, campos[4]);
			
			cout<<"Apodo: ";
			getline(cin, campos[5]);
			
			cout<<"Cumpleaños: ";
			getline(cin, campos[6]);
			encontrado=true;
		
		}
		//contacto modificado o no
		actual<<campos[0]<<"|"<<campos[1]<<'|'<<campos[3]<<"|"<<campos[4]<<"|"<<campos[5]<<"|"<<campos[6]<<"\n";
	}
	
	archivo.close();
	actual.close();
	
	remove("lista_contactos.txt");
	rename("lista_actualizada.txt", "lista_contactos.txt");
	
	if (encontrado)
	cout<<"Modificación del contacto realizada corecctamente.";
	else
	cout<<"Nombres del contacto no encontrado\n";
	
	return 0;	
}