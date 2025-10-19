#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cout << "Ingrese un entero > 1: ";
    cin >> n;
    if (n <= 1) {
        cout << "Numero invalido.\n";
        return 0;
    }

    vector<long long> factores;
    while (n % 2 == 0) { factores.push_back(2); n /= 2; }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) { factores.push_back(i); n /= i; }
    }
    if (n > 1) factores.push_back(n);

    cout << "Factores primos: ";
    for (size_t i = 0; i < factores.size(); ++i) {
        if (i) cout << " * ";
        cout << factores[i];
    }
    cout << endl;
    return 0;
}
