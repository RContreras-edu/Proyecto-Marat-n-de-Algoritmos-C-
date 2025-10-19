#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    if (n < 0) {
        cout << "El factorial no está definido para negativos." << endl;
        return 1;
    }
    cout << "El factorial de " << n << " es: " << factorial(n) << endl;
    return 0;
}
