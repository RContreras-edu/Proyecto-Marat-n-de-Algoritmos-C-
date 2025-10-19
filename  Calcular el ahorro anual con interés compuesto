#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double deposito, tasa;
    cout << "Depósito mensual ($): ";
    cin >> deposito;
    cout << "Tasa de interés mensual (%): ";
    cin >> tasa;

    double r = tasa / 100;
    double total = deposito * ((pow(1 + r, 12) - 1) / r);
    cout << fixed << setprecision(2);
    cout << "Ahorro total al final del año: $" << total << endl;
    return 0;
}
