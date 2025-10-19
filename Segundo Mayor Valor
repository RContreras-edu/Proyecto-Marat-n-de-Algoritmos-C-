#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    if (n < 2) {
        cout << "Debe haber al menos dos elementos." << endl;
        return 1;
    }

    int arr[n];
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int mayor = INT_MIN, segundo = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > mayor) {
            segundo = mayor;
            mayor = arr[i];
        } else if (arr[i] > segundo && arr[i] != mayor) {
            segundo = arr[i];
        }
    }

    if (segundo == INT_MIN)
        cout << "No hay segundo mayor (todos son iguales)." << endl;
    else
        cout << "Segundo mayor: " << segundo << endl;

    return 0;
}


