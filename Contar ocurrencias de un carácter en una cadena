#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    char c;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);
    cout << "Ingrese carácter a buscar: ";
    cin >> c;

    int contador = 0;
    for (char ch : texto) {
        if (ch == c)
            contador++;
    }

    cout << "El carácter '" << c << "' aparece " << contador << " veces.\n";
    return 0;
}
