#include <iostream>
using namespace std;

int main() {
    long long totalSeg;
    cout << "Ingrese segundos totales: ";
    cin >> totalSeg;
    if (totalSeg < 0) { cout << "Valor invalido.\n"; return 0; }
    long long dias = totalSeg / 86400;
    long long resto = totalSeg % 86400;
    long long horas = resto / 3600;
    resto %= 3600;
    long long minutos = resto / 60;
    long long segundos = resto % 60;
    cout << dias << " dias, " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos\n";
    return 0;
}
