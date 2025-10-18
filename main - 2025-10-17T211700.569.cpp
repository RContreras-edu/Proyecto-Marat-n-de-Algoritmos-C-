#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cout << "Ingrese entero > 1: ";
    cin >> n;
    if (n <= 1) { cout << "Valor debe ser > 1.\n"; return 0; }
    int cnt = 0;
    if (n % 2 == 0) { ++cnt; while (n % 2 == 0) n /= 2; }
    for (long long p = 3; p * p <= n; p += 2) {
        if (n % p == 0) {
            ++cnt;
            while (n % p == 0) n /= p;
        }
    }
    if (n > 1) ++cnt;
    cout << "Cantidad de factores primos distintos: " << cnt << endl;
    return 0;
}
