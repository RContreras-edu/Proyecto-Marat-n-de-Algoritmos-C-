#include <iostream>
using namespace std;

int main() {
    double calif, suma=0;
    cout << "Ingrese 4 calificaciones:\n";
    for(int i=0; i<4; i++){
        cin >> calif;
        suma += calif;
    }
    double promedio = suma/4;
    cout << "Promedio: " << promedio;
    return 0;
}
