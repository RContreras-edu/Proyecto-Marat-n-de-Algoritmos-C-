#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n / 2; ++i)
        if (n % i == 0)
            suma += i;

    if (suma == n)
        cout << "Es un número perfecto" << endl;
    else
        cout << "No es un número perfecto" << endl;

    return 0;
}

