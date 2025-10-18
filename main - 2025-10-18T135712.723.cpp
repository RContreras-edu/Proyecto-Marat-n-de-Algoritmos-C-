#include <iostream>
using namespace std;

int main() {
    int base, exponente;
    cout << "Ingrese base: ";
    cin >> base;
    cout << "Ingrese exponente (>=0): ";
    cin >> exponente;

    if (exponente < 0) {
        cout << "Exponente no válido" << endl;
        return 1;
    }

    int resultado = 1;
    for (int i = 0; i < exponente; ++i)
        resultado *= base;

    cout << base << "^" << exponente << " = " << resultado << endl;

    return 0;
}


