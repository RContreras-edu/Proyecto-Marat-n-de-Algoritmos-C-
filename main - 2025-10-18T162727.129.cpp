#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int plantas;
    double produccionPorPlanta, area;
    cout << "Número de plantas: ";
    cin >> plantas;
    cout << "Producción por planta (kg): ";
    cin >> produccionPorPlanta;
    cout << "Área sembrada (m²): ";
    cin >> area;

    double rendimiento = (plantas * produccionPorPlanta) / area;
    cout << fixed << setprecision(2);
    cout << "Rendimiento: " << rendimiento << " kg/m²" << endl;
    return 0;
}
