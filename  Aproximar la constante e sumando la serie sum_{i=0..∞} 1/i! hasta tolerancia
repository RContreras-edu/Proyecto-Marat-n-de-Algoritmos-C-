#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double eps;
    cout << "Ingrese tolerancia eps (ej. 1e-10): ";
    if (!(cin >> eps) || eps <= 0) return 0;
    double sum = 0.0;
    double term = 1.0; // 0! = 1
    int i = 0;
    while (term >= eps) {
        sum += term;
        ++i;
        term /= i; // next term = previous / i (since term_i = 1/i!)
    }
    cout << fixed << setprecision(12);
    cout << "Aproximacion de e: " << sum << " con " << i << " terminos (eps=" << eps << ")\n";
    return 0;
}
