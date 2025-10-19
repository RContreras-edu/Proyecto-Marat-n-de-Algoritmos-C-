#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n-1);
}

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    if (n < 0) {
        cout << "Número no válido\n";
        return 1;
    }

    cout << "Factorial de " << n << " es " << fact(n) << endl;
    return 0;
}
