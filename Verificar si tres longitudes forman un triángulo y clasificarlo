#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese tres longitudes (separadas por espacio): ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Longitudes deben ser positivas.\n";
        return 0;
    }

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Forman un triángulo. Tipo: ";
        if (a == b && b == c) cout << "Equilátero\n";
        else if (a == b || a == c || b == c) cout << "Isósceles\n";
        else cout << "Escaleno\n";
    } else {
        cout << "No forman un triángulo.\n";
    }
    return 0;
}
