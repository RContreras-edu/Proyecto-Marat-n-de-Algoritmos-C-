#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cout << "Ingrese un entero positivo: ";
    if (!(cin >> n) || n < 0) return 0;

    long long original = n;
    int k = 0;
    long long tmp = n;
    if (tmp == 0) k = 1;
    while (tmp > 0) { tmp /= 10; ++k; }

    long long suma = 0;
    tmp = original;
    while (tmp > 0) {
        int d = tmp % 10;
        suma += (long long) pow(d, k);
        tmp /= 10;
    }

    if (suma == original) cout << original << " es un numero Armstrong.\n";
    else cout << original << " NO es un numero Armstrong.\n";
    return 0;
}
