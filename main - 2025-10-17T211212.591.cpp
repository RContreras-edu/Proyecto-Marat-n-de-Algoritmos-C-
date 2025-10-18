#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de valores: ";
    cin >> n;
    if (n <= 2) { cout << "No es posible calcular promedio recortado para n <= 2.\n"; return 0; }
    vector<double> v(n);
    double suma = 0;
    for (int i = 0; i < n; ++i) { cin >> v[i]; suma += v[i]; }
    double mn = numeric_limits<double>::infinity();
    double mx = -numeric_limits<double>::infinity();
    for (double x : v) { if (x < mn) mn = x; if (x > mx) mx = x; }
    double trimmed = (suma - mn - mx) / (n - 2);
    cout << "Promedio recortado (sin min ni max): " << trimmed << endl;
    return 0;
}
