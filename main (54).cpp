#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int ultimo = abs(n) % 10;

    if (ultimo == 5)
        cout << "El numero termina en 5." << endl;
    else
        cout << "El numero no termina en 5." << endl;
    return 0;
}
