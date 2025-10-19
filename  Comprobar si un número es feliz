#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n (<= 20 recomendado): ";
    if (!(cin >> n) || n < 0 || n > 30) return 0;
    vector<int> a(n);
    cout << "Ingrese " << n << " elementos:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long total = 1LL << n;
    for (long long mask = 0; mask < total; ++mask) {
        cout << "{ ";
        for (int i = 0; i < n; ++i)
            if (mask & (1LL << i)) cout << a[i] << " ";
        cout << "}\n";
    }
    return 0;
}
