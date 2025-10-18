#include <iostream>
using namespace std;
int main() {
    int minutos, horas, resto;
    cout << "Ingrese los minutos totales: ";
    cin >> minutos;
    horas = minutos / 60;
    resto = minutos % 60;
    cout << horas << " horas y " << resto << " minutos." << endl;
    return 0;
}
