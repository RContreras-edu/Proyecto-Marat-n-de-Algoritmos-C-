#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;
    if (n <= 0) return 0;
    vector<int> a(n);
    cout << "Ingrese " << n << " enteros:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];
    int k;
    cout << "Ingrese k (rotaciones a la derecha): ";
    cin >> k;
    k = ((k % n) + n) % n;
    cout << "Arreglo rotado:\n";
    for (int i = n - k; i < n; ++i) if (i>=0) cout << a[i] << " ";
    for (int i = 0; i < n - k; ++i) cout << a[i] << " ";
    cout << endl;
    return 0;
}
