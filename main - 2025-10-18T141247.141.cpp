#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño matriz cuadrada: ";
    cin >> n;

    int matriz[100][100];
    cout << "Ingrese elementos:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matriz[i][j];

    int suma = 0;
    for (int i = 0; i < n; ++i)
        suma += matriz[i][i];

    cout << "Suma diagonal principal: " << suma << endl;
    return 0;
}
