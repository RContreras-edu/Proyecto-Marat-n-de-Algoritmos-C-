#include <iostream>
using namespace std;

int main() {
    int num, invertido = 0;
    cout << "Ingresa un número: ";
    cin >> num;

    while (num != 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }

    cout << "Número invertido: " << invertido << endl;
    return 0;
}
