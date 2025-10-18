#include <iostream>
using namespace std;

int main() {
    int num;
    bool esPrimo = true;

    cout << "Ingrese un número entero mayor que 1: ";
    cin >> num;

    if(num <= 1) {
        cout << "El número debe ser mayor que 1." << endl;
        return 0;
    }

    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if(esPrimo)
        cout << num << " es un número primo." << endl;
    else
        cout << num << " no es un número primo." << endl;

    return 0;
}
