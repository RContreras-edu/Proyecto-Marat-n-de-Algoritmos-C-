#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese el número de filas y columnas: ";
    cin >> n >> m;

    int A[10][10], B[10][10], C[10][10];

    cout << "Ingrese la primera matriz:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> A[i][j];

    cout << "Ingrese la segunda matriz:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> B[i][j];

    // Sumar
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Matriz resultado:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
