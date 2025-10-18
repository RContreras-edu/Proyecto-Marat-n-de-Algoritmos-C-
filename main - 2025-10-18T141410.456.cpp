#include <iostream>
using namespace std;

int potencia(int base, int exp) {
    if (exp == 0) return 1;
    return base * potencia(base, exp - 1);
}

int main() {
    int b, e;
    cout << "Ingrese base: ";
    cin >> b;
    cout << "Ingrese exponente (≥0): ";
    cin >> e;

    if (e < 0) {
        cout << "Exponente inválido\n";
        return 1;
    }

    cout << b << "^" << e << " = " << potencia(b, e) << endl;
    return 0;
}

