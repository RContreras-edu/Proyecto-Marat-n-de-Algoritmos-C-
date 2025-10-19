#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cout << "Ingrese un entero mayor que 1: ";
    cin >> n;
    if (n <= 1) { cout << "Valor invalido.\n"; return 0; }

    long long suma = 1; // 1 es siempre divisor propio (para n>1)
    long long limite = sqrt(n);
    for (long long d = 2; d <= limite; ++d) {
        if (n % d == 0) {
            suma += d;
            long long otro = n / d;
            if (otro != d) suma += otro;
        }
    }
    if (suma == n) cout << n << " es un numero perfecto.\n";
    else cout << n << " NO es un numero perfecto. Suma divisores propios = " << suma << endl;
    return 0;
}
