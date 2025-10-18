#include <iostream>
using namespace std;

int main() {
    string marca, respuesta;
    cout << "Ingrese la marca del carro: ";
    cin >> marca;
    cout << "Es electrico? (si/no): ";
    cin >> respuesta;

    if(respuesta == "si")
        cout << marca << " es electrico." << endl;
    else
        cout << marca << " no es electrico." << endl;

    return 0;
}
