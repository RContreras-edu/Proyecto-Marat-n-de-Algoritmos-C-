#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero % 3 == 0 && numero % 5 == 0) {
        cout << numero << " es divisible entre 3 y 5." << endl;
    } else {
        cout << numero << " NO es divisible entre 3 y 5." << endl;
    }

    return 0;
}
