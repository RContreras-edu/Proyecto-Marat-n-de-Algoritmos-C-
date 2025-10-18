#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string linea;
    cout << "Ingrese una frase: ";
    getline(cin, linea);

    istringstream iss(linea);
    string palabra, masLarga = "";
    while (iss >> palabra) {
        if (palabra.size() > masLarga.size()) masLarga = palabra;
    }

    if (masLarga.empty()) cout << "No se ingresaron palabras.\n";
    else cout << "Palabra mas larga: \"" << masLarga << "\" (longitud " << masLarga.size() << ")\n";
    return 0;
}
