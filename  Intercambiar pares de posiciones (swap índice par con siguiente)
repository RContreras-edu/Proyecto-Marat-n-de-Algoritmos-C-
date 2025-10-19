#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    if (!(cin >> n) || n < 0) return 0;
    vector<int> a(n);
    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 0; i + 1 < n; i += 2) {
        int tmp = a[i];
        a[i] = a[i+1];
        a[i+1] = tmp;
    }

    cout << "Arreglo modificado: ";
    for (int x : a) cout << x << " ";
    cout << endl;
    return 0;
}
