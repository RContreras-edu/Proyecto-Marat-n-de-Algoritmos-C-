#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Ingrese el radio de la esfera: ";
    cin >> r;

    double area = 4 * M_PI * pow(r, 2);
    double volumen = (4.0 / 3.0) * M_PI * pow(r, 3);

    cout << "Área: " << area << endl;
    cout << "Volumen: " << volumen << endl;
    return 0;
}
