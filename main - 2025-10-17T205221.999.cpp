#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, r;
    int n;
    cout << "Ingrese a, r y n (n >= 0): ";
    cin >> a >> r >> n;
    if (n < 0) { cout << "n debe ser >= 0\n"; return 0; }

    double S;
    if (fabs(r - 1.0) < 1e-12) {
        S = a * (n + 1);
    } else {
        S = a * (1.0 - pow(r, n + 1)) / (1.0 - r);
    }

    cout << "Suma de la serie geométrica: " << S << endl;
    return 0;
}
