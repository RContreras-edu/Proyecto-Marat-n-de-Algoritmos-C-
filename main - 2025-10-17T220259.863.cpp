#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Función para rotar el arreglo a la derecha k veces
void rotarDerecha(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;

    k = k % n;

    // Rotación basada en reversas
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main() {
    int n, k;

    // Leer tamaño del arreglo
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: el tamaño debe ser mayor a cero." << endl;
        return 1;
    }

    vector<int> arreglo(n);
    cout << "Ingrese los " << n << " elementos del arreglo: ";
    for (int i = 0; i < n; ++i) {
        cin >> arreglo[i];
    }

    // Leer número de rotaciones
    cout << "Ingrese el número de rotaciones hacia la derecha (k): ";
    cin >> k;

    rotarDerecha(arreglo, k);

    // Mostrar el resultado
    cout << "Arreglo rotado: ";
    for (int num : arreglo) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


