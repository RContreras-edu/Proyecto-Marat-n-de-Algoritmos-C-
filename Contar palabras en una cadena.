#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    int contador = 0;
    bool enPalabra = false;

    for (char c : texto) {
        if (c != ' ' && !enPalabra) {
            enPalabra = true;
            contador++;
        } else if (c == ' ') {
            enPalabra = false;
        }
    }

    cout << "Número de palabras: " << contador << endl;
    return 0;
}

