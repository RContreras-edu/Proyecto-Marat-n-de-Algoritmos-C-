#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Ingrese número decimal positivo: ";
    cin >> num;

    if (num < 0) {
        cout << "Número no válido\n";
        return 1;
    }
    if (num == 0) {
        cout << "0\n";
        return 0;
    }

    string binario = "";
    while (num > 0) {
        binario = to_string(num % 2) + binario;
        num /= 2;
    }

    cout << "Binario: " << binario << endl;
    return 0;
}
