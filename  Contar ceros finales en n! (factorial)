#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Ingrese n (entero >= 0): ";
    cin >> n;
    if (n < 0) { cout << "Valor invalido.\n"; return 0; }

    long long cuenta = 0;
    long long p = 5;
    while (p <= n) {
        cuenta += n / p;
        if (p > n / 5) break; // evitar overflow
        p *= 5;
    }
    cout << "Cantidad de ceros finales en " << n << "! = " << cuenta << endl;
    return 0;
}
