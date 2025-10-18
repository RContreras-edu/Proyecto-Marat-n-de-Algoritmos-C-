#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string texto, invertida = "";
    stack<char> pila;

    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    for (char c : texto)
        pila.push(c);

    while (!pila.empty()) {
        invertida += pila.top();
        pila.pop();
    }

    cout << "Cadena invertida: " << invertida << endl;
    return 0;
}

