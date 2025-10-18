#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthMayor(vector<int>& v, int k) {
    sort(v.begin(), v.end(), greater<int>());
    if (k > 0 && k <= v.size())
        return v[k - 1];
    return -1; // indicador de error
}

int main() {
    int n, k;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> v(n);
    cout << "Elementos: ";
    for (int i = 0; i < n; ++i) cin >> v[i];
    cout << "Ingrese k: ";
    cin >> k;

    int resultado = kthMayor(v, k);
    if (resultado == -1) 
        cout << "k inválido." << endl;
    else
        cout << "El " << k << "‑ésimo más grande es: " << resultado << endl;

    return 0;
}
