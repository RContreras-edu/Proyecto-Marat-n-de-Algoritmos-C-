#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int main() {
    int a, b;
    cout << "Ingrese el rango (a b): ";
    cin >> a >> b;
    cout << "Primos entre " << a << " y " << b << ": ";
    for(int i = a; i <= b; i++)
        if(esPrimo(i)) cout << i << " ";
    return 0;
}
