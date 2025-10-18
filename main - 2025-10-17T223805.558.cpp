#include <iostream>
#include <vector>
using namespace std;

int busquedaBinaria(const vector<int>& arr, int objetivo) {
    int izquierda = 0, derecha = arr.size() - 1;
    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;
        if (arr[medio] == objetivo)
            return medio;
        else if (arr[medio] < objetivo)
            izquierda = medio + 1;
        else
            derecha = medio - 1;
    }
    return -1;
}

int main() {
    int n, x;
    cout << "Cantidad de elementos (ordenados): ";
    cin >> n;
    vector<int> arr(n);
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout << "Número a buscar: ";
    cin >> x;

    int pos = busquedaBinaria(arr, x);
    if (pos != -1)
        cout << "Encontrado en la posición: " << pos << endl;
    else
        cout << "No se encontró el número." << endl;

    return 0;
}

