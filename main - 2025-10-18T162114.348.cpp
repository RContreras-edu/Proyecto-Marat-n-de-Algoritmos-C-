#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese el semieje mayor (a): ";
    cin >> a;
    cout << "Ingrese el semieje menor (b): ";
    cin >> b;

    double p = M_PI * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));
    cout << "Perímetro aproximado: " << p << endl;
    return 0;
}
