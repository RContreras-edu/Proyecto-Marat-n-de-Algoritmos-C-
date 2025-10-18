#include <iostream>
using namespace std;

int main() {
    double capacidad, caudal;
    cout << "Capacidad del tanque (litros): ";
    cin >> capacidad;
    cout << "Caudal de la manguera (litros/minuto): ";
    cin >> caudal;

    double tiempo = capacidad / caudal;
    cout << "Tiempo estimado: " << tiempo << " minutos" << endl;
    return 0;
}
