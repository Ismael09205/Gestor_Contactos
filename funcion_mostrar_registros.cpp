#include<iostream>
#include<fstream>
#include<string>

using namespace std;
void mostrarContactos(){
	ifstream archivo("lista_contactos.txt");
	string linea;
	int num = 1;

	if(archivo.is_open()){
		cout<<"\nLista de Contactos: ";
		while (getline(archivo, linea)){
			cout<<num++ <<". "<<linea<<"\n";
		}
		archivo.close();
	}else{
		cout<<"No se pudo abrir el archivo con los registros.\n";
	}
}

int main(){
	mostrarContactos();
	return 0;
}
