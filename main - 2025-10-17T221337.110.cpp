#include <iostream>
#include <string>
using namespace std;

void generar(int abiertos, int cerrados, string actual) {
    if (abiertos == 0 && cerrados == 0) {
        cout << actual << endl;
        return;
    }
    if (abiertos > 0)
        generar(abiertos - 1, cerrados, actual + "(");
    if (cerrados > abiertos)
        generar(abiertos, cerrados - 1, actual + ")");
}

int main() {
    int n;
    cout << "Número de pares de paréntesis: ";
    cin >> n;
    cout << "Combinaciones válidas:\n";
    generar(n, n, "");
    return 0;
}



