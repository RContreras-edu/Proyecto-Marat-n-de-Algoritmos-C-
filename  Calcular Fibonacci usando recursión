#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Ingrese n para Fibonacci: ";
    cin >> n;

    if (n < 0) {
        cout << "Número no válido\n";
        return 1;
    }

    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    return 0;
}
