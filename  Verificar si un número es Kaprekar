#include <iostream>
#include <cmath>
using namespace std;

int numDigits(unsigned long long x) {
    if (x == 0) return 1;
    int d = 0;
    while (x) { x /= 10; ++d; }
    return d;
}

int main() {
    unsigned long long n;
    cout << "Ingrese entero positivo: ";
    if (!(cin >> n) || n == 0) return 0;
    unsigned long long sq = n * n;
    int d = numDigits(n);
    unsigned long long power = 1;
    for (int i = 0; i < d; ++i) power *= 10;

    // probar una sola partición donde right tiene d dígitos
    unsigned long long right = sq % power;
    unsigned long long left = sq / power;
    if (left + right == n) cout << n << " es Kaprekar.\n";
    else cout << n << " NO es Kaprekar.\n";
    return 0;
}
