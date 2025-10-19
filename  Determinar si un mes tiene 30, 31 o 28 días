#include <iostream>
using namespace std;

int main() {
    int mes;
    cout << "Ingrese el numero del mes (1-12): ";
    cin >> mes;

    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Tiene 31 dias." << endl; break;
        case 4: case 6: case 9: case 11:
            cout << "Tiene 30 dias." << endl; break;
        case 2:
            cout << "Tiene 28 dias (29 en año bisiesto)." << endl; break;
        default:
            cout << "Mes invalido." << endl;
    }
    return 0;
}
