#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<long long> a(n), p(n);
    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];

    p[0] = a[0];
    for (int i = 1; i < n; ++i) p[i] = p[i-1] + a[i];

    cout << "Arreglo de prefijos: ";
    for (auto v : p) cout << v << " ";
    cout << endl;
    return 0;
}

