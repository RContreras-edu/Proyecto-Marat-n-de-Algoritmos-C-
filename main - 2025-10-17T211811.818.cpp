#include <iostream>
using namespace std;
int main() {
    double distancia, tiempo;
    cout << "Distancia recorrida (km): ";
    cin >> distancia;
    cout << "Tiempo empleado (horas): ";
    cin >> tiempo;
    cout << "Velocidad promedio: " << distancia / tiempo << " km/h" << endl;
    return 0;
}
