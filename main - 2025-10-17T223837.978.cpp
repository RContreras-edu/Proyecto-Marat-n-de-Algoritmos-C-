#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    stack<char> pila;
    queue<char> cola;

    for (char c : palabra) {
        pila.push(c);
        cola.push(c);
    }

    bool esPalindromo = true;
    while (!pila.empty()) {
        if (pila.top() != cola.front()) {
            esPalindromo = false;
            break;
        }
        pila.pop();
        cola.pop();
    }

    if (esPalindromo)
        cout << "Es un palíndromo." << endl;
    else
        cout << "No es un palíndromo." << endl;

    return 0;
}

