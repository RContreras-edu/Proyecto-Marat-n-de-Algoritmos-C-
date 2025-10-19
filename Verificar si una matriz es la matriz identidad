#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n (tamano matriz): ";
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    cout << "Ingrese elementos fila por fila:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    bool id = true;
    for (int i = 0; i < n && id; ++i)
        for (int j = 0; j < n; ++j) {
            if (i == j) { if (A[i][j] != 1) { id = false; break; } }
            else { if (A[i][j] != 0) { id = false; break; } }
        }
    cout << (id ? "Es matriz identidad.\n" : "No es matriz identidad.\n");
    return 0;
}
