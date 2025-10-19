#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<char> seen(n+1, 0);
    for (int x : a) if (x >= 1 && x <= n) seen[x] = 1;

    for (int i = 1; i <= n; ++i) if (!seen[i]) { cout << "Menor entero positivo faltante: " << i << endl; return 0; }
    cout << "Menor entero positivo faltante: " << (n + 1) << endl;
    return 0;
}
