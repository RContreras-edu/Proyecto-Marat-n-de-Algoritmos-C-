#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double base = 25.0, limite = 100.0, uso;
    cout << "Datos usados (GB): ";
    cin >> uso;

    double costo = base;
    if (uso > limite)
        costo += (uso - limite) * 0.5;

    cout << fixed << setprecision(2);
    cout << "Costo total del plan: $" << costo << endl;
    return 0;
}
