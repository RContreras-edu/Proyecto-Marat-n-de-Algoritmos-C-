#include <iostream>
using namespace std;

int sumaCuadrados(int n) {
    int suma = 0;
    while (n > 0) {
        int d = n % 10;
        suma += d*d;
        n /= 10;
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;

    int tmp = n;
    while (tmp != 1 && tmp != 4) tmp = sumaCuadrados(tmp);

    if (tmp == 1) cout << n << " es un numero feliz.\n";
    else cout << n << " no es un numero feliz.\n";
    return 0;
}
