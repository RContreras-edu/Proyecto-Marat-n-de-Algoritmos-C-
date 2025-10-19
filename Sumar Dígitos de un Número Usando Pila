#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, suma = 0;
    stack<int> pila;

    cout << "Ingrese un número: ";
    cin >> n;

    while (n > 0) {
        pila.push(n % 10);
        n /= 10;
    }

    while (!pila.empty()) {
        suma += pila.top();
        pila.pop();
    }

    cout << "Suma de dígitos: " << suma << endl;
    return 0;
}

