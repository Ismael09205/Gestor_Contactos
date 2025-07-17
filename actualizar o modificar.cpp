#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string buscarNombre;
    cout << "Ingrese el nombre del contacto a modificar: ";
    getline(cin, buscarNombre);  // Permite ingresar nombres con espacios

    ifstream archivo("contactos.txt");
    ofstream registroModificado("registro Modificado.txt");

    string linea;
    bool encontrado = false;

    while (getline(archivo, linea)) {
        size_t posicionPosterior = linea.find(',');
        if (posicionPosterior != string::npos) {
            string nombre = linea.substr(0, posicionPosterior);
            string telefono = linea.substr(posicionPosterior + 1);

            if (nombre == buscarNombre) {
                string nuevoNombre, nuevoTelefono;
                cout << "Nuevo nombre: ";
                getline(cin, nuevoNombre);
                cout << "Nuevo telefono: ";
                getline(cin, nuevoTelefono);

                registroModificado << nuevoNombre << "," << nuevoTelefono << endl;
                encontrado = true;
            } else {
                registroModificado << nombre << "," << telefono << endl;
            }
        }
    }

    archivo.close();
    registroModificado.close();

    remove("contactos.txt");
    rename("registro Modificado.txt", "contactos.txt");

    if (encontrado)
        cout << "Contacto modificado correctamente.\n";
    else
        cout << "Nombre no encontrado.\n";

    return 0;
}
