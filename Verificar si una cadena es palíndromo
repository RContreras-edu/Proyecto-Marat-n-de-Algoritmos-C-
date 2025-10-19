#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    int i = 0, j = texto.length() - 1;
    bool esPalindromo = true;

    while (i < j) {
        if (texto[i] != texto[j]) {
            esPalindromo = false;
            break;
        }
        i++; j--;
    }

    if (esPalindromo)
        cout << "Es palíndromo\n";
    else
        cout << "No es palíndromo\n";

    return 0;
}

