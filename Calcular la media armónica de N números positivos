#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese N (cantidad de valores): ";
    cin >> N;
    if (N <= 0) return 0;

    double sumaInv = 0.0;
    for (int i = 0; i < N; ++i) {
        double x;
        cout << "Valor " << (i+1) << ": ";
        cin >> x;
        if (x <= 0) { cout << "Valores deben ser positivos.\n"; return 0; }
        sumaInv += 1.0 / x;
    }
    double harmonic = N / sumaInv;
    cout << "Media armonica: " << harmonic << endl;
    return 0;
}
