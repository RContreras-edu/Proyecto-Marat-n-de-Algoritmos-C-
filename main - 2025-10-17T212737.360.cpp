#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, esPrimo = 1;
    cout << "Ingresa un número: ";
    cin >> num;

    if (num < 2) esPrimo = 0;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            esPrimo = 0;
            break;
        }
    }

    if (esPrimo)
        cout << num << " es primo." << endl;
    else
        cout << num << " no es primo." << endl;

    return 0;
}
