#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long max1 = LLONG_MIN, max2 = LLONG_MIN;
    for (long long x : a) {
        if (x > max1) { max2 = max1; max1 = x; }
        else if (x > max2 && x < max1) max2 = x;
    }

    if (max2 == LLONG_MIN) cout << "No existe segundo mayor distinto.\n";
    else cout << "Segundo mayor distinto: " << max2 << endl;
    return 0;
}
