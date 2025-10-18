#include <iostream>
using namespace std;

int main() {
    int velocidad;
    cout << "Ingrese la velocidad maxima del carro (km/h): ";
    cin >> velocidad;

    if(velocidad < 100)
        cout << "Carro lento" << endl;
    else if(velocidad <= 180)
        cout << "Carro medio" << endl;
    else
        cout << "Carro rapido" << endl;

    return 0;
}
