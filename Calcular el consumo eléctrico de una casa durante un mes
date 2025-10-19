#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Número de aparatos eléctricos: ";
    cin >> n;

    double total = 0, costoKWh = 0.12;
    for (int i = 1; i <= n; i++) {
        double potencia, horas, dias;
        cout << "\nAparato " << i << " (potencia en kW, horas diarias, días al mes): ";
        cin >> potencia >> horas >> dias;
        total += potencia * horas * dias;
    }

    cout << fixed << setprecision(2);
    cout << "\nConsumo total: " << total << " kWh" << endl;
    cout << "Costo mensual: $" << total * costoKWh << endl;
    return 0;
}
