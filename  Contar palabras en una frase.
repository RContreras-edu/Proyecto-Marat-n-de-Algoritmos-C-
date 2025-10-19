#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string frase;
    int contador = 0;

    cout << "Ingresa una frase: ";
    getline(cin, frase);

    stringstream ss(frase);
    string palabra;
    while (ss >> palabra) {
        contador++;
    }

    cout << "Número de palabras: " << contador << endl;
    return 0;
}
