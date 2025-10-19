#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int temp = numero; // variable temporal para manipular el número
    while(temp != 0) {
        suma += temp % 10; // extrae el último dígito y lo suma
        temp /= 10;        // elimina el último dígito
    }

    cout << "La suma de los digitos de " << numero << " es: " << suma << endl;
    return 0;
}
