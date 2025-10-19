#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Número de plantas: ";
    cin >> n;

    double totalAgua = 0;
    for (int i = 1; i <= n; i++) {
        int tipo;
        cout << "\nTipo de planta (1=Flor, 2=Arbusto, 3=Árbol): ";
        cin >> tipo;

        double agua = 0;
        if (tipo == 1) agua = 0.5;
        else if (tipo == 2) agua = 2.0;
        else agua = 10.0;

        totalAgua += agua;
    }

    cout << fixed << setprecision(2);
    cout << "\nAgua total diaria: " << totalAgua << " litros" << endl;
    cout << "Agua semanal: " << totalAgua * 7 << " litros" << endl;
    return 0;
}
