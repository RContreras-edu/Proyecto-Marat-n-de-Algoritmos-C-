#include <iostream>
using namespace std;

int main() {
    int n;

    // 1. Leer el tamaño del arreglo
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: el tamaño debe ser mayor a cero." << endl;
        return 1;
    }

    int arr[n];

    // 2. Leer los elementos del arreglo
    cout << "Ingrese " << n << " números enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // 3. Invertir el arreglo usando dos punteros
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // 4. Imprimir el arreglo invertido
    cout << "Arreglo invertido: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
