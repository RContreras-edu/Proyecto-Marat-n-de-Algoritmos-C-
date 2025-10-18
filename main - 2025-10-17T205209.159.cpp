#include <iostream>
#include <string>
using namespace std;

int main() {
    string bin;
    cout << "Ingrese un numero binario (solo 0 y 1): ";
    cin >> bin;
    long long valor = 0;
    for (char c : bin) {
        if (c != '0' && c != '1') {
            cout << "Entrada invalida. Solo 0 y 1.\n";
            return 0;
        }
        valor = valor * 2 + (c - '0');
    }
    cout << "Valor decimal: " << valor << endl;
    return 0;
}
