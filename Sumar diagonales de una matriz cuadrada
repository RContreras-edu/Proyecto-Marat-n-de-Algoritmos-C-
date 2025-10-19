#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n (tamaño de matriz cuadrada): ";
    cin >> n;
    if (n <= 0) return 0;
    vector<vector<long long>> A(n, vector<long long>(n));
    cout << "Ingrese elementos fila por fila:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    long long suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += A[i][i];
        suma += A[i][n-1-i];
    }
    if (n % 2 == 1) {
        suma -= A[n/2][n/2]; // se contó dos veces
    }
    cout << "Suma de ambas diagonales: " << suma << endl;
    return 0;
}
