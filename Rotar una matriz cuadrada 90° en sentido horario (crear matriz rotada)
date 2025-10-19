#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n (tamaño de la matriz cuadrada): ";
    cin >> n;
    if (n <= 0) return 0;
    vector<vector<int>> A(n, vector<int>(n));
    cout << "Ingrese los elementos fila por fila:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    vector<vector<int>> B(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            B[j][n - 1 - i] = A[i][j];

    cout << "Matriz rotada 90 grados clockwise:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cout << B[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
