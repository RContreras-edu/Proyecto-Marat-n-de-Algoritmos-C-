#include <iostream>
using namespace std;

int main() {
    int num, suma = 0, contador = 0;

    cout << "Ingresa números positivos (0 para terminar): " << endl;
    do {
        cin >> num;
        if (num > 0) {
            suma += num;
            contador++;
        }
    } while (num != 0);

    if (contador > 0)
        cout << "Promedio: " << (double)suma / contador << endl;
    else
        cout << "No se ingresaron números positivos." << endl;

    return 0;
}
