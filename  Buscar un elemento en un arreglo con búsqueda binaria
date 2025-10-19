#include <iostream>
using namespace std;

int main() {
    int n, objetivo;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arr[100];
    cout << "Ingrese elementos ordenados:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Ingrese número a buscar: ";
    cin >> objetivo;

    int inicio = 0, fin = n - 1, medio;
    bool encontrado = false;

    while (inicio <= fin) {
        medio = inicio + (fin - inicio) / 2;
        if (arr[medio] == objetivo) {
            encontrado = true;
            break;
        } else if (arr[medio] < objetivo) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if (encontrado)
        cout << "Número encontrado en índice: " << medio << endl;
    else
        cout << "Número no encontrado" << endl;

    return 0;
}
