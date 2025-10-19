#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    bool ordenado = true;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            ordenado = false;
            break;
        }
    }

    if (ordenado)
        cout << "El arreglo está ordenado de forma ascendente." << endl;
    else
        cout << "El arreglo NO está ordenado." << endl;

    return 0;
}
