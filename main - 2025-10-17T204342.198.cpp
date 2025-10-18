#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double lado, area;
    cout << "Ingrese el lado del triangulo equilatero: ";
    cin >> lado;
    area = (pow(lado, 2) * sqrt(3)) / 4;
    cout << "El area es: " << area;
    return 0;
}
