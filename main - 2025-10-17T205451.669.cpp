#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned)time(nullptr));
    int target = rand() % 100 + 1;
    int intento, cont = 0;
    cout << "Adivina el numero entre 1 y 100. Ingresa 0 para salir." << endl;
    while (true) {
        cout << "Tu intento: ";
        if (!(cin >> intento)) break;
        if (intento == 0) { cout << "Saliste del juego.\n"; break; }
        ++cont;
        if (intento == target) {
            cout << "Correcto! Intentos: " << cont << endl;
            break;
        } else if (intento < target) cout << "Demasiado bajo.\n";
        else cout << "Demasiado alto.\n";
    }
    return 0;
}
