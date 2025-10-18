#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double crecimiento = 0, total = 0;
    for (int mes = 1; mes <= 12; mes++) {
        cout << "Crecimiento del mes " << mes << " (cm): ";
        cin >> crecimiento;
        total += crecimiento;
    }
    cout << fixed << setprecision(2);
    cout << "Altura total al final del año: " << total << " cm" << endl;
    return 0;
}

