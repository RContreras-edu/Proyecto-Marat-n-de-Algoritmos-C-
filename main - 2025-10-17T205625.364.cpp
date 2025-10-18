#include <iostream>
using namespace std;

int main() {
    unsigned long long n;
    cout << "Ingrese un entero no negativo: ";
    if (!(cin >> n)) return 0;

    unsigned long long sq = n * n;
    unsigned long long mod = 1;
    unsigned long long tmp = n;
    if (tmp == 0) mod = 10; // tratar 0 como dígito único
    while (tmp > 0) { mod *= 10; tmp /= 10; }

    if (sq % mod == n) cout << n << " es automorfico.\n";
    else cout << n << " NO es automorfico.\n";
    return 0;
}
