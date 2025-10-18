#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int terminos;
    cout << "Número de términos para aproximar PI: ";
    cin >> terminos;

    double pi = 0.0;
    for (int i = 0; i < terminos; i++) {
        double signo = (i % 2 == 0) ? 1 : -1;
        pi += signo / (2.0 * i + 1);
    }
    pi *= 4;
    cout << fixed << setprecision(10);
    cout << "Aproximación de PI con " << terminos << " términos: " << pi << endl;
    return 0;
}
