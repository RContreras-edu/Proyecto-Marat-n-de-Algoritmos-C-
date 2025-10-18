#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un entero mayor que 1: ";
    cin >> n;
    if (n <= 1) { cout << "No es valido.\n"; return 0; }

    int suma = 1; // 1 siempre divisor propio para n>1
    int limite = sqrt(n);
    for (int d = 2; d <= limite; ++d) {
        if (n % d == 0) {
            suma += d;
            int otro = n / d;
            if (otro != d) suma += otro;
        }
    }

    if (suma == n) cout << n << " es un numero perfecto.\n";
    else cout << n << " NO es un numero perfecto.\n";
    return 0;
}
