#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double monto, interes, ingreso;
    int meses;

    cout << "Monto del préstamo: ";
    cin >> monto;
    cout << "Interés mensual (%): ";
    cin >> interes;
    cout << "Número de meses: ";
    cin >> meses;
    cout << "Ingreso mensual: ";
    cin >> ingreso;

    double i = interes / 100;
    double cuota = (monto * i) / (1 - pow(1 + i, -meses));

    cout << fixed << setprecision(2);
    cout << "Cuota mensual: $" << cuota << endl;

    if (cuota <= ingreso * 0.4)
        cout << "Préstamo aprobado." << endl;
    else
        cout << "Préstamo rechazado (excede 40% del ingreso)." << endl;
    return 0;
}

