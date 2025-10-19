#include <iostream>
#include <stack>
using namespace std;


int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;


    stack<char> pila;
    for (char c : palabra)
        pila.push(c);


    string invertida;
    while (!pila.empty()) {
        invertida += pila.top();
        pila.pop();
    }


    if (invertida == palabra)
        cout << "Es un palíndromo\n";
    else
        cout << "No es un palíndromo\n";


    return 0;
}
