#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n (tamano de la matriz cuadrada): ";
    cin >> n;
    vector<vector<long long>> A(n, vector<long long>(n));
    cout << "Ingrese elementos fila por fila:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    bool sim = true;
    for (int i = 0; i < n && sim; ++i)
        for (int j = i+1; j < n; ++j)
            if (A[i][j] != A[j][i]) { sim = false; break; }

    cout << (sim ? "La matriz es simetrica.\n" : "La matriz NO es simetrica.\n");
    return 0;
}
