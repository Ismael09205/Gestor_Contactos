#include<iostream>
#include<vector>
#include<fstream>
#include<stdlib.h>
using namespace std;

void eliminar_contacto() {
    string buscarContacto;
    cout << "Ingrese el nombre y apellido del contacto a eliminar: ";
    cin.ignore(); // Limpia el buffer para evitar problemas con getline
    getline(cin, buscarContacto);

    ifstream archivo("lista_contactos.txt");
    ofstream temporal("lista_temporal.txt");

    if (!archivo || !temporal) {
        cout << "? Error al abrir los archivos.\n";
        return;
    }

    string linea;
    bool encontrado = false;

    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string campos[7];

        // separa los campos usando '|'
        for (int i = 0; i < 7; i++) {
            getline(ss, campos[i], '|');
        }

        // Compara "nombre apellido" con lo que escribió el usuario
        if (campos[0] + " " + campos[1] == buscarContacto) {
            cout << "? Contacto eliminado: " << campos[0] << " " << campos[1] << endl;
            encontrado = true;
            // ? NO escribimos esta línea en el archivo temporal ? así se "borra"
        } else {
            // Copiamos todo lo que NO se elimina
            temporal << campos[0] << "|" << campos[1] << "|" << campos[2] << "|" 
                     << campos[3] << "|" << campos[4] << "|" << campos[5] << "|" << campos[6] << "\n";
        }
    }

    archivo.close();
    temporal.close();

    remove("lista_contactos.txt");
    rename("lista_temporal.txt", "lista_contactos.txt");

    if (!encontrado) {
        cout << "?? No se encontró un contacto con ese nombre y apellido.\n";
    }
}

int main()
{
	eliminar_contacto();
}
