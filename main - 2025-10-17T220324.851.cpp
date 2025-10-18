#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: tamaño inválido." << endl;
        return 1;
    }

    int arr[n];
    cout << "Ingrese los " << n << " elementos: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int menor = arr[0], mayor = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < menor) menor = arr[i];
        if (arr[i] > mayor) mayor = arr[i];
    }

    cout << "Menor: " << menor << endl;
    cout << "Mayor: " << mayor << endl;

    return 0;
}


