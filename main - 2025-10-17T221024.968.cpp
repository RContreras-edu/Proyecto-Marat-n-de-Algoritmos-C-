#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    stack<char> pila;
    for (char c : palabra)
        pila.push(c);

    bool esPalindromo = true;
    for (char c : palabra) {
        if (c != pila.top()) {
            esPalindromo = false;
            break;
        }
        pila.pop();
    }

    if (esPalindromo)
        cout << "Es un palíndromo." << endl;
    else
        cout << "No es un palíndromo." << endl;

    return 0;
}
