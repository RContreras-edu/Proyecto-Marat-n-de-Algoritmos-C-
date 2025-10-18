#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double lado;
    cout << "Ingrese el lado del cubo: ";
    cin >> lado;
    cout << "El volumen del cubo es: " << pow(lado, 3);
    return 0;
}
