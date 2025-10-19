#include <iostream>
using namespace std;

int main() {
    int n, original, inverso = 0, digito;
    cout << "Ingrese un numero: ";
    cin >> n;
    original = n;
    while (n > 0) {
        digito = n % 10;
        inverso = inverso * 10 + digito;
        n /= 10;
    }
    if (original == inverso)
        cout << "El numero es capicua." << endl;
    else
        cout << "El numero no es capicua." << endl;
    return 0;
}
