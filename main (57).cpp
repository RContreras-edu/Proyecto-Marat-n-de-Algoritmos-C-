#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float arista;
    cout << "Ingrese la longitud de la arista: ";
    cin >> arista;

    float volumen = pow(arista, 3);
    cout << "El volumen del cubo es: " << volumen << endl;
    return 0;
}
