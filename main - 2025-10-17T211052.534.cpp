#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n (recomendado n<=20): ";
    cin >> n;
    unsigned long long fact = 1;
    unsigned long long S = 0;
    for (int i = 1; i <= n; ++i) {
        fact *= i; // i!
        S += fact;
    }
    cout << "Suma de factoriales = " << S << endl;
    return 0;
}
