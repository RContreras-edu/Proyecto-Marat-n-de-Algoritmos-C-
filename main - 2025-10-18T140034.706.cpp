#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número mayor que 1: ";
    cin >> num;

    if (num <= 1) {
        cout << "Número inválido\n";
        return 1;
    }

    bool esPrimo = true;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo)
        cout << num << " es primo\n";
    else
        cout << num << " no es primo\n";

    return 0;
}
