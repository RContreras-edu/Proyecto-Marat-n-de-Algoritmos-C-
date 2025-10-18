#include <iostream>
using namespace std;

int main() {
    double lado, perimetro;
    cout << "Ingrese la longitud de un lado del pentagono: ";
    cin >> lado;
    perimetro = 5 * lado;
    cout << "El perimetro del pentagono es: " << perimetro << endl;
    return 0;
}
