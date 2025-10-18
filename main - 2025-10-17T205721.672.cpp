#include <iostream>
using namespace std;

int main() {
    double P, r_pct, t;
    cout << "Ingrese capital P, tasa anual (%) y tiempo (años): ";
    cin >> P >> r_pct >> t;
    double r = r_pct / 100.0;
    double I = P * r * t;
    double A = P + I;
    cout << "Interes simple I = " << I << endl;
    cout << "Monto final A = " << A << endl;
    return 0;
}
