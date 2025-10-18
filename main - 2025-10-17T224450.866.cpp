#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;
    int matriz[10][10];

    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matriz[i][j];

    int suma = 0;
    for (int j = 0; j < n; ++j)
        suma += matriz[0][j];

    bool esMagico = true;
    for (int i = 0; i < n; ++i) {
        int fila = 0;
        for (int j = 0; j < n; ++j) fila += matriz[i][j];
        if (fila != suma) esMagico = false;
    }

    for (int j = 0; j < n; ++j) {
        int col = 0;
        for (int i = 0; i < n; ++i) col += matriz[i][j];
        if (col != suma) esMagico = false;
    }

    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; ++i) {
        diag1 += matriz[i][i];
        diag2 += matriz[i][n - i - 1];
    }
    if (diag1 != suma || diag2 != suma) esMagico = false;

    cout << (esMagico ? "Es un cuadrado mágico" : "No es un cuadrado mágico") << endl;
    return 0;
}
