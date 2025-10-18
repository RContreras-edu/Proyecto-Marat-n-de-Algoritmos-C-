#include <iostream>
#include <vector>
using namespace std;

int busquedaBinaria(const vector<int>& v, int x) {
    int inicio = 0, fin = v.size() - 1;
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (v[medio] == x) return medio;
        else if (v[medio] < x) inicio = medio + 1;
        else fin = medio - 1;
    }
    return -1;
}

int main() {
    int n, x;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> v(n);
    cout << "Elementos ordenados: ";
    for (int i = 0; i < n; ++i) cin >> v[i];

    cout << "Número a buscar: ";
    cin >> x;

    int pos = busquedaBinaria(v, x);
    if (pos != -1) cout << "Elemento encontrado en la posición: " << pos << endl;
    else cout << "Elemento no encontrado." << endl;

    return 0;
}


