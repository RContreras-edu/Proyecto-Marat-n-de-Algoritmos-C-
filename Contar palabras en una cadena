#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una frase: ";
    getline(cin, texto);

    stringstream ss(texto);
    string palabra;
    int contador = 0;

    while (ss >> palabra)
        contador++;

    cout << "Número de palabras: " << contador << endl;

    return 0;
}
