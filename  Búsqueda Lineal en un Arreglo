#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Tamaño del arreglo: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Valor a buscar: ";
    cin >> x;

    bool encontrado = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            cout << "Encontrado en la posición " << i << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "No se encontró el valor." << endl;

    return 0;
}


