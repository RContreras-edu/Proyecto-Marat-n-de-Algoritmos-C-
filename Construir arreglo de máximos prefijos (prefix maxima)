#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    if (n <= 0) return 0;
    vector<long long> a(n), pm(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long cur = a[0];
    pm[0] = cur;
    for (int i = 1; i < n; ++i) {
        if (a[i] > cur) cur = a[i];
        pm[i] = cur;
    }

    cout << "Prefix maxima: ";
    for (long long x : pm) cout << x << " ";
    cout << endl;
    return 0;
}
