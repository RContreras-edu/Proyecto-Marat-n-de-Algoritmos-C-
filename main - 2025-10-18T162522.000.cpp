#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double temp[7], suma = 0, maxT, minT;
    cout << "Ingrese las 7 temperaturas diarias:\n";
    for (int i = 0; i < 7; i++) {
        cin >> temp[i];
        suma += temp[i];
        if (i == 0) { maxT = minT = temp[i]; }
        else {
            if (temp[i] > maxT) maxT = temp[i];
            if (temp[i] < minT) minT = temp[i];
        }
    }

    cout << fixed << setprecision(2);
    cout << "Promedio semanal: " << suma / 7 << " °C\n";
    cout << "Máxima: " << maxT << " °C\n";
    cout << "Mínima: " << minT << " °C\n";
    return 0;
}

