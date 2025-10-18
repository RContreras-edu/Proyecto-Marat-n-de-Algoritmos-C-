#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, digito;
    cout << "Ingrese un numero: ";
    cin >> n;
    while (n > 0) {
        digito = n % 10;
        suma += digito;
        n /= 10;
    }
    cout << "La suma de los digitos es: " << suma << endl;
    return 0;
}
