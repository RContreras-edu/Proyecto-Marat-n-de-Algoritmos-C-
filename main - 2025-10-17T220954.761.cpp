#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cout << "Cantidad de elementos: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i) cin >> vec[i];

    cout << "Elemento a buscar: ";
    cin >> x;

    bool encontrado = false;
    for (int i = 0; i < n; ++i) {
        if (vec[i] == x) {
            cout << "Elemento encontrado en la posición: " << i << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "Elemento no encontrado." << endl;

    return 0;
}


