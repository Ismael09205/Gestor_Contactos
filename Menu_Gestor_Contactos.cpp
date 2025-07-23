#include<iostream>
using namespace std;
const string user= "1";
const string password="1";
void Mostrar_Opciones (){
	string opcion;
	while (true){
	cout<<"1.- Mosrtrar los contactos registrados"<<endl;
	cout<<"2.- Crear un nuevo contacto"<<endl;
	cout<<"3.- Actualizar un contacto"<<endl;
	cout<<"4.- Eliminar un contacto"<<endl;
	cout<<"5.- Guardar los contactos"<<endl;
	cout<<"6.- Salir del gestor de contactos"<<endl;
	cout<<"Ingrese la opcion requerida: ";
	cin>>opcion;
	if(opcion=="1"){
		cout<<"0"<<endl;
	}else if (opcion=="2"){
		cout<<"1"<<endl;
	}else if (opcion=="3"){
		cout<<"2"<<endl;
		
	}else if (opcion=="4"){
		cout<<"3"<<endl;
		
	}else if (opcion=="5"){
		cout<<"4"<<endl;
	
	}else if (opcion=="6"){
		cout<<"Saliendo del programa";
		break;
			
	}else{
		cout<<"La opcion ingresada no es valida, vuelva a ingresar la opcion"<<endl;

	}
}
}


void login(){
	string usuario;
	string contraseña;
	cout<<"----Inicio de sesion-----"<<endl;
	while(true){
		cout<<"Ingrese su usuario: ";
		cin>>usuario;
		cout<<"Ingrese su contraseña: ";
		cin>>contraseña;
	if (user!=usuario or password!=contraseña){
		cout<<"Credenciales incorrectas, vuelva a ingresar los datos "<<endl;	
	}else{
		cout<<"***Bienvenido al Gestor de Contactos***"<<endl;
		Mostrar_Opciones();	
		break;
	}	
	}		
	}


int main(){
	login();
}
