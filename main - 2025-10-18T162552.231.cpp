#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double alturaInicial, tasa;
    int dias;
    cout << "Altura inicial (cm): ";
    cin >> alturaInicial;
    cout << "Tasa diaria de crecimiento (%): ";
    cin >> tasa;
    cout << "Número de días: ";
    cin >> dias;

    double alturaFinal = alturaInicial * pow(1 + tasa / 100, dias);
    cout << fixed << setprecision(2);
    cout << "Altura final estimada: " << alturaFinal << " cm" << endl;
    return 0;
}

