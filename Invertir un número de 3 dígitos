#include <iostream>
using namespace std;

int main() {
    int num, invertido = 0, digito;
    cout << "Ingrese un número de 3 dígitos: ";
    cin >> num;
    
    while(num != 0) {
        digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    
    cout << "Número invertido: " << invertido << endl;
    return 0;
}
