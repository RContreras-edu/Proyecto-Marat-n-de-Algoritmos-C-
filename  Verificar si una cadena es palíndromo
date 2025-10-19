#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    int inicio = 0;
    int fin = texto.length() - 1;
    bool esPalindromo = true;

    while (inicio < fin) {
        if (texto[inicio] != texto[fin]) {
            esPalindromo = false;
            break;
        }
        inicio++;
        fin--;
    }

    if (esPalindromo)
        cout << "Es un palíndromo" << endl;
    else
        cout << "No es un palíndromo" << endl;

    return 0;
}
