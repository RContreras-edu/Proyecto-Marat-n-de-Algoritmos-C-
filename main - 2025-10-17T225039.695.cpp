#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese filas (m): ";
    cin >> m;
    cout << "Ingrese columnas (n): ";
    cin >> n;

    int matriz[100][100];
    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matriz[i][j];

    int suma = 0;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            suma += matriz[i][j];

    cout << "La suma de los elementos es: " << suma << endl;
    return 0;
}

