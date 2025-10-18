#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;
    cout << "Ingrese la cantidad de números impares a sumar: ";
    cin >> N;

    for(int i = 0; i < N; i++) {
        suma += 2*i + 1;
    }

    cout << "La suma de los primeros " << N << " números impares es: " << suma << endl;
    return 0;
}
