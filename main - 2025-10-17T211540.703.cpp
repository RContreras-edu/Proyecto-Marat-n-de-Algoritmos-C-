#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cout << "Ingrese n y k (0<=k<=n): ";
    if (!(cin >> n >> k)) return 0;
    if (k < 0 || n < 0 || k > n) { cout << "Valores invalidos.\n"; return 0; }
    k = min(k, n - k);
    unsigned long long res = 1;
    for (long long i = 1; i <= k; ++i) {
        res = res * (n - k + i) / i;
    }
    cout << "C(" << n << "," << k << ") = " << res << endl;
    return 0;
}
