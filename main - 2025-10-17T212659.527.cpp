#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;
    cout << "Ingresa un número: ";
    cin >> num;

    while (num != 0) {
        suma += num % 10;
        num /= 10;
    }

    cout << "Suma de dígitos: " << suma << endl;
    return 0;
}
