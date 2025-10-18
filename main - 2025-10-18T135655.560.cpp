#include <iostream>
using namespace std;

int main() {
    int m, p, n;
    cout << "Ingrese filas de A (m): ";
    cin >> m;
    cout << "Ingrese columnas de A / filas de B (p): ";
    cin >> p;
    cout << "Ingrese columnas de B (n): ";
    cin >> n;

    int A[100][100], B[100][100], C[100][100] = {0};

    cout << "Ingrese matriz A:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < p; ++j)
            cin >> A[i][j];

    cout << "Ingrese matriz B:\n";
    for (int i = 0; i < p; ++i)
        for (int j = 0; j < n; ++j)
            cin >> B[i][j];

    // Multiplicación
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            for (int k = 0; k < p; ++k)
                C[i][j] += A[i][k] * B[k][j];

    cout << "Matriz resultante C:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
