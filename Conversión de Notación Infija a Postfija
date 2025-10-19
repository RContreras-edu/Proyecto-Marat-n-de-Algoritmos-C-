#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prioridad(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string convertirPostfija(string infija) {
    stack<char> pila;
    string salida;

    for (char c : infija) {
        if (isalnum(c)) {
            salida += c;
        } else if (c == '(') {
            pila.push(c);
        } else if (c == ')') {
            while (!pila.empty() && pila.top() != '(') {
                salida += pila.top(); pila.pop();
            }
            pila.pop(); // eliminar '('
        } else {
            while (!pila.empty() && prioridad(pila.top()) >= prioridad(c)) {
                salida += pila.top(); pila.pop();
            }
            pila.push(c);
        }
    }

    while (!pila.empty()) {
        salida += pila.top(); pila.pop();
    }

    return salida;
}

int main() {
    string inf

ija;
 cout << "Ingrese expresión infija: ";
 cin >> infija;
string postfija = convertirPostfija(infija);
cout << "Expresión postfija: " << postfija << endl;
return 0;

}

