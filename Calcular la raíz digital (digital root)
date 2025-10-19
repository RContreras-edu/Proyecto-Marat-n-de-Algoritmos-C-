#include <iostream>
using namespace std;

int sumDigits(unsigned long long x) {
    int s = 0;
    while (x) { s += x % 10; x /= 10; }
    return s;
}

int main() {
    unsigned long long n;
    cout << "Ingrese entero no negativo: ";
    if (!(cin >> n)) return 0;
    if (n == 0) { cout << "Raiz digital: 0\n"; return 0; }
    while (n >= 10) n = sumDigits(n);
    cout << "Raiz digital: " << n << endl;
    return 0;
}
