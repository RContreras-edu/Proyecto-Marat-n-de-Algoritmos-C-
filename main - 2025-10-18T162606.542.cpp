#include <iostream>
using namespace std;

int main() {
    double temp, humedad;
    cout << "Temperatura actual (°C): ";
    cin >> temp;
    cout << "Humedad actual (%): ";
    cin >> humedad;

    if (temp >= 18 && temp <= 30 && humedad >= 40 && humedad <= 80)
        cout << "La planta sobrevive en estas condiciones." << endl;
    else
        cout << "Condiciones adversas, riesgo de marchitamiento." << endl;
    return 0;
}
