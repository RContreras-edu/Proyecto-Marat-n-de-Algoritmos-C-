#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de valores positivos: ";
    cin >> n;
    if (n <= 0) return 0;
    vector<double> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    double sumlog = 0.0;
    for (double x : v) {
        if (x <= 0) { cout << "Todos los valores deben ser positivos.\n"; return 0; }
        sumlog += log(x);
    }
    double geo = exp(sumlog / n);
    cout << "Media geometrica = " << geo << endl;
    return 0;
}
