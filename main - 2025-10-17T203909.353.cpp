#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, r;
    cout << "Ingrese n y r (0 <= r <= n): ";
    cin >> n >> r;
    if (n < 0 || r < 0 || r > n) {
        cout << "Entrada invalida.\n";
        return 0;
    }
    r = min(r, n - r);
    long double result = 1.0L;
    for (int i = 1; i <= r; ++i) {
        result *= (long double)(n - r + i) / i;
    }
    unsigned long long comb = (unsigned long long) llround(result);
    cout << "C(n,r) = " << comb << endl;
    return 0;
}
