Código:
#include <iostream>
using namespace std;

int main() {
    int num, suma = 0, digito;
    cout << "Ingrese un número: ";
    cin >> num;
    
    while(num != 0) {
        digito = num % 10;
        if(digito % 2 == 0) suma += digito;
        num /= 10;
    }
    
    cout << "La suma de los dígitos pares es: " << suma << endl;
    return 0;
}
