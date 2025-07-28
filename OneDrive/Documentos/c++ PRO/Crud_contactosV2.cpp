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

bool soloLetras(const string& str){
	if(str.empty()) return false;
	for(char c: str){
		if(!isalpha(c)&& !isspace(c)){
			return false;
		}
	}
	return true;
}

bool soloNumeros(const string& telefono){
	if(telefono.length()!=10) return false;
	for(char c: telefono){
		if(!isdigit(c)) return false;
	}
	return true;
}

bool validarCorreo(const string& correo){
	if(correo.empty()) return false;
	size_t arroba=correo.find("@");
	size_t com =correo.find(".com", arroba);
	return arroba!= string::npos && com != string::npos && arroba<com;
}

bool validarCumpleaños(const string& fecha){
	if(fecha.length()!=10) return false;
	if(fecha[2] != '/'||fecha [5] !='/') return false;
	int dia=stoi(fecha.substr(0,2));
	int mes=stoi(fecha.substr(3,2));
	int anio=stoi(fecha.substr(6,4));
	
	if(dia<1||dia>31) return false;
	if(mes<1||mes>12) return false;
	if(anio<1900||anio>2025)return false;
	
	return true;	
}


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
	while(true){
		cout<<"Ingrese el nombre del contacto que desea agregar: ";
		getline(cin, contacto_nuevo.nombre_contacto);
		if (contacto_nuevo.nombre_contacto.empty()){
			cout<<"El campo no puede estar vacio.\n";
		}else if(!soloLetras(contacto_nuevo.nombre_contacto)){
			cout<<"Error. Ingrese solo letras\n";
		}else{
			break;
		}
	}
	
	
	while(true){
			cout<<"Ingrese el apellido del contacto que desea agregar: ";
			getline(cin, contacto_nuevo.apellido_contacto);
			if (contacto_nuevo.apellido_contacto.empty()){
				cout<<"El campo no puede estar vacio.\n";
			}else if(!soloLetras(contacto_nuevo.apellido_contacto)){
				cout<<"Error. Ingrese solo letras\n";
			}else{
				break;
			}
		}
		
	
	while(true){
			cout<<"Ingrese el teléfono del contacto que desea agregar: ";
			getline(cin, contacto_nuevo.telefono);
			if (contacto_nuevo.telefono.empty()){
				cout<<"El campo no puede estar vacio.\n";
			}else if(!soloNumeros(contacto_nuevo.telefono)){
				cout<<"Error\n";
				cout<<"Ingrese solo números\n"<<"Ingrese 10 dígitos\n";
			}else{
				break;
			}
		}
		
		
		while(true){
			cout<<"Ingrese el correo del contacto que desea agregar: ";
			getline(cin, contacto_nuevo.correo);
			if (contacto_nuevo.correo.empty()){
				cout<<"El campo no puede estar vacio.\n";
			}else if(!validarCorreo(contacto_nuevo.correo)){
				cout<<"Error. El correo ingresado no es valido\n";
				cout<<"Deber tener '@' y '.com'\n";
			}else{
				break;
			}
		}
				
      	while(true){
			cout<<"Ingrese la dirección del contacto que desea agregar: ";
			getline(cin, contacto_nuevo.direccion);
			if (contacto_nuevo.direccion.empty()){
				cout<<"El campo no puede estar vacio.\n";
			}else{
				break;
			}
		}

				
		cout<<"Ingrese el apodo del contacto que desea agregar: ";
		getline(cin,contacto_nuevo.apodo);
		
		while(true){
			cout<<"Ingrese el cumpleaños del contacto que desea agregar: ";
			cout<<"\nEn formato dd/mm/yyyy\n";
			getline(cin, contacto_nuevo.cumpleaños);
			if (contacto_nuevo.cumpleaños.empty()){
				cout<<"El campo no puede estar vacio.\n";
			}else if(!validarCumpleaños(contacto_nuevo.cumpleaños)){
				cout<<"Error. El formato debe ser: dd/mm/yyyy\n";
			}else{
				break;
			}
		}	
			contacto_nuevo.nombre_completo=contacto_nuevo.nombre_contacto +" "+contacto_nuevo.apellido_contacto;
			contactos.push_back(contacto_nuevo);
	
}
void mostrar_contactos(){
	if(contactos.empty()){
	cout<<"\nTodavia no existen contactos agregados"<<endl;
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
	getline(cin, buscar);

	bool encontrado = false;

	for (auto& contacto : contactos) {
		if (buscar == contacto.nombre_completo) {
			while(true){
				cout<<"Ingrese los datos del contacto a Actualizar\n";
				cout<<"Nombre: ";
				getline(cin, contacto.nombre_contacto);
				if (contacto.nombre_contacto.empty()){
				}else if(!soloLetras(contacto.nombre_contacto)){
					cout<<"ERROR...Ingrese solo letras\n";
				}else{
					break;
				}
			}
			
			
            while (true) {
                cout << "Apellido: ";
                getline(cin, contacto.apellido_contacto);
                if (contacto.apellido_contacto.empty()) {
                    cout << "El campo no puede estar vacío.\n";
                } else if (!soloLetras(contacto.apellido_contacto)) {
                    cout << "Error. Ingrese solo letras\n";
                } else {
                    break;
                }
            }

            while (true) {
                cout << "Teléfono: ";
                getline(cin, contacto.telefono);
                if (contacto.telefono.empty()) {
                    cout << "El campo no puede estar vacío.\n";
                } else if (!soloNumeros(contacto.telefono)) {
                    cout << "Error. Ingrese solo números y 10 dígitos.\n";
                } else {
                    break;
                }
            }


            while (true) {
                cout << "Correo: ";
                getline(cin, contacto.correo);
                if (contacto.correo.empty()) {
                    cout << "El campo no puede estar vacío.\n";
                } else if (!validarCorreo(contacto.correo)) {
                    cout << "Error. El correo debe contener '@' y terminar en '.com'\n";
                } else {
                    break;
                }
            }


            while (true) {
                cout << "Dirección: ";
                getline(cin, contacto.direccion);
                if (contacto.direccion.empty()) {
                    cout << "El campo no puede estar vacío.\n";
                } else {
                    break;
                }
            }

            
            cout << "Apodo: ";
            getline(cin, contacto.apodo);

            
            while (true) {
                cout << "Cumpleaños (dd/mm/yyyy): ";
                getline(cin, contacto.cumpleaños);
                if (contacto.cumpleaños.empty()) {
                    cout << "El campo no puede estar vacío.\n";
                } else if (!validarCumpleaños(contacto.cumpleaños)) {
                    cout << "Error. El formato debe ser dd/mm/yyyy\n";
                } else {
                    break;
                }
            }
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
	setlocale(LC_ALL, "");
	cargarContactosDesdeArchivo();
while(true){
	mostrarMenu();
	string opcion;
	cout<<"\nIngrese la opción que desea realizar: ";
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
		
	
	




	
	


	
	
