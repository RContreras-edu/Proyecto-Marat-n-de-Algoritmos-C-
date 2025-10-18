#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if ((n >= 100 && n <= 999) || (n <= -100 && n >= -999))
        cout << "El numero tiene tres cifras." << endl;
    else
        cout << "El numero NO tiene tres cifras." << endl;
    return 0;
}
