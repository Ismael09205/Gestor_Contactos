#include<iostream>
#include<vector>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<sstream>
using namespace std;
struct info_contactos{
	string nombre_contacto;
	string apellido_contacto;
	string telefono;
	string correo;
	string direccion;
	string apodo;
	string cumpleaños;
	string nombre_completo;


};
vector<info_contactos> contactos;

void llenar_archivo(){
	
	ofstream archivo_contactos("lista_contactos.txt");
	if (!archivo_contactos.is_open()){
		cerr<<"Error al crear el archivo de contactos"<<endl;
		
	}
	for (const auto& contacto : contactos){
		archivo_contactos<<contacto.nombre_contacto<<"|"
		<<contacto.apellido_contacto<<"|"
		<<contacto.telefono<<"|"
		<<contacto.correo<<"|"
		<<contacto.direccion<<"|"
		<<contacto.apodo<<"|"
		<<contacto.cumpleaños<<"\n";
		
	}
} 

void agregar(){
	
	info_contactos contacto_nuevo;
		cout<<"Ingrese el nombre del contacto que desea agregar: ";
		getline(cin,contacto_nuevo.nombre_contacto);
		if(contacto_nuevo.nombre_contacto.empty()){
			while(true){
				cout<<"El campo no puede estar vacio"<<endl;
				cout<<"Ingrese el nombre del contacto que desea agregar: ";
				getline(cin,contacto_nuevo.nombre_contacto);
			if (!contacto_nuevo.nombre_contacto.empty()){
				break;
			}
			}
			
		}
		
		cout<<"Ingrese el apellido del contacto que desea agregar: ";
			getline(cin,contacto_nuevo.apellido_contacto);
			if(contacto_nuevo.apellido_contacto.empty()){
				while(true){
					cout<<"El campo no puede estar vacio"<<endl;
					cout<<"Ingrese el apellido del contacto que desea agregar: ";
					getline(cin,contacto_nuevo.apellido_contacto);
				if (!contacto_nuevo.apellido_contacto.empty()){
					break;
				}
				}
			}
		cout<<"Ingrese el telefono del contacto que desea agregar: ";
				getline(cin,contacto_nuevo.telefono);
				if(contacto_nuevo.telefono.empty()){
					while(true){
						cout<<"El campo no puede estar vacio"<<endl;
						cout<<"Ingrese el telefono del contacto que desea agregar: ";
						getline(cin,contacto_nuevo.telefono);
					if (!contacto_nuevo.telefono.empty()){
						break;
					}
					}
				}
				
		cout<<"Ingrese el correo del contacto que desea agregar: ";
				getline(cin,contacto_nuevo.correo);
				if(contacto_nuevo.correo.empty()){
					while(true){
						cout<<"El campo no puede estar vacio"<<endl;
						cout<<"Ingrese el correo del contacto que desea agregar: ";
						getline(cin,contacto_nuevo.correo);
					if (!contacto_nuevo.correo.empty()){
						break;
					}
					}
				}
		cout<<"Ingrese la direccion del contacto que desea agregar: ";
				getline(cin,contacto_nuevo.direccion);
				if(contacto_nuevo.direccion.empty()){
					while(true){
						cout<<"El campo no puede estar vacio"<<endl;
						cout<<"Ingrese la direccion del contacto que desea agregar: ";
						getline(cin,contacto_nuevo.direccion);
					if (!contacto_nuevo.direccion.empty()){
						break;
					}
					}
				}
		cout<<"Ingrese el apodo del contacto que desea agregar: ";
		getline(cin,contacto_nuevo.apodo);
		
		cout<<"Ingrese el cumpleaños del contacto que desea agregar: ";
				getline(cin,contacto_nuevo.cumpleaños);
				if(contacto_nuevo.cumpleaños.empty()){
					while(true){
						cout<<"El campo no puede estar vacio"<<endl;
						cout<<"Ingrese el cumpleaños del contacto que desea agregar: ";
						getline(cin,contacto_nuevo.cumpleaños);
					if (!contacto_nuevo.cumpleaños.empty()){
						break;
					}
					}
				}	
				
			contacto_nuevo.nombre_completo=contacto_nuevo.nombre_contacto +" "+contacto_nuevo.apellido_contacto;
			contactos.push_back(contacto_nuevo);
	
}
void mostrar_contactos(){
	if(contactos.empty()){
	cout<<"Todavia no existen contactos agregados"<<endl;
	return;
	}
	for (int i=0;i<contactos.size();i++){
		
		cout<<"Nombre: "<<contactos[i].nombre_contacto<<endl;
		cout<<"Apellido: "<<contactos[i].apellido_contacto<<endl;
		cout<<"Telefono: "<<contactos[i].telefono<<endl;
		cout<<"Correo: "<<contactos[i].correo<<endl;
		cout<<"Direccion: "<<contactos[i].direccion<<endl;
		cout<<"Apodo: "<<contactos[i].apodo<<endl;
		cout<<"Cumpleaños: "<<contactos[i].cumpleaños<<endl;
		;
		cout<<"--------------------------------"<<"\n";
	}
	
	
}
void actualizar_contacto() {
	if (contactos.empty()) {
		cout << "Todavía no hay contactos agregados" << endl;
		return;
	}

	string buscar;
	cout << "Ingrese el nombre completo (nombre y apellido) del contacto que desea actualizar: ";
	getline(cin, buscar); // NO uses cin.ignore() aquí, ya viene limpio desde main

	bool encontrado = false;

	for (auto& contacto : contactos) {
		if (buscar == contacto.nombre_completo) {
			cout << "Ingrese el nuevo nombre del contacto: ";
			getline(cin, contacto.nombre_contacto);
			cout << "Ingrese el nuevo apellido del contacto: ";
			getline(cin, contacto.apellido_contacto);
			cout << "Ingrese el nuevo teléfono del contacto: ";
			getline(cin, contacto.telefono);
			cout << "Ingrese el nuevo correo del contacto: ";
			getline(cin, contacto.correo);
			cout << "Ingrese la nueva dirección del contacto: ";
			getline(cin, contacto.direccion);
			cout << "Ingrese el nuevo apodo del contacto: ";
			getline(cin, contacto.apodo);
			cout << "Ingrese el nuevo cumpleaños del contacto: ";
			getline(cin, contacto.cumpleaños);

			
			contacto.nombre_completo = contacto.nombre_contacto + " " + contacto.apellido_contacto;

			cout << "Contacto actualizado correctamente" << endl;
			encontrado = true;
			break;
		}
	}

	if (!encontrado) {
		cout << "El nombre del contacto no fue encontrado" << endl;
	}
}

void eliminar() {
	if (contactos.empty()) {
		cout << "Todavía no hay contactos agregados" << endl;
		return;
	}

	string eliminar_contacto;
	cout << "Ingrese el nombre completo (nombre y apellido) del contacto que desea eliminar: ";
	getline(cin, eliminar_contacto); 

	bool encontrado = false;

	for (int i = 0; i < contactos.size(); ++i) {
		if (eliminar_contacto == contactos[i].nombre_completo) {
			contactos.erase(contactos.begin() + i);
			cout << "Contacto eliminado correctamente" << endl;
			encontrado = true;
			break;
		}
	}

	if (!encontrado) {
		cout << "Nombre no encontrado para eliminar" << endl;
	}
}



void cargarContactosDesdeArchivo() {
    ifstream archivo("lista_contactos.txt");
    
    if (!archivo.is_open()) {
        return;
    }

    contactos.clear(); 
    
    string linea;
    while (getline(archivo, linea)) {
        if (linea.empty()) continue; 
        
        info_contactos nuevo_contacto;
        stringstream ss(linea);
        string campo;
        
        getline(ss, nuevo_contacto.nombre_contacto, '|');
        getline(ss, nuevo_contacto.apellido_contacto, '|');
        getline(ss, nuevo_contacto.telefono, '|');
        getline(ss, nuevo_contacto.correo, '|');
        getline(ss, nuevo_contacto.direccion, '|');
        getline(ss, nuevo_contacto.apodo, '|');
        getline(ss, nuevo_contacto.cumpleaños, '|');
        
        
        nuevo_contacto.nombre_completo = nuevo_contacto.nombre_contacto + " " + nuevo_contacto.apellido_contacto;
        
        contactos.push_back(nuevo_contacto);
    }
    
    archivo.close();
}

void mostrarMenu() {

    cout << "\n=== SISTEMA AGREGAR CONTACTO ===" << endl;
    cout << "1. Mostrar todos los contactos" << endl;
    cout << "2. Agregar nuevo contacto" << endl;
    cout << "3. Actualizar datos de un contacto" << endl;
    cout << "4. Eliminar contacto" << endl;
    cout<<  "5. Guardar cambios "<<endl;
    cout << "6. Salir" << endl;
   
}
int main(){
	cargarContactosDesdeArchivo();
while(true){
	mostrarMenu();
	string opcion;
	cout<<"Ingrese la opcion que desea realizar: ";
	cin>>opcion;
	cin.ignore();
	if (opcion=="1"){
		mostrar_contactos();
	}else if(opcion=="2"){
		agregar();
	}else if (opcion=="3"){
		actualizar_contacto();
		
	}else if (opcion=="4"){
		eliminar();
	}else if (opcion=="5"){
		llenar_archivo();
	}else if(opcion=="6"){
		cout<<"Saliendo del programa"<<endl;
		cout<<"Ultimos cambios guardados";
		llenar_archivo();
		}
}
}
		
	
	




	
	


	
	
