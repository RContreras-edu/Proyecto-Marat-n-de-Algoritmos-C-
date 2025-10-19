#include <iostream>
#include <vector>
using namespace std;

int busquedaBinaria(vector<int>& v, int objetivo) {
    int ini = 0, fin = v.size() - 1;
    while (ini <= fin) {
        int mid = (ini + fin) / 2;
        if (v[mid] == objetivo) return mid;
        else if (v[mid] < objetivo) ini = mid + 1;
        else fin = mid - 1;
    }
    return -1;
}

int main() {
    int n, x;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> v(n);
    cout << "Vector ordenado: ";
    for (int i = 0; i < n; ++i) cin >> v[i];

    cout << "Elemento a buscar: ";
    cin >> x;

    int pos = busquedaBinaria(v, x);
    if (pos != -1)
        cout << "Elemento encontrado en la posición: " << pos << endl;
    else
        cout << "Elemento no encontrado." << endl;

    return 0;
}

