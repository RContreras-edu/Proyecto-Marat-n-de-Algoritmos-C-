#include <iostream>
#include <cstdlib>
using namespace std;

long long gcd(long long a, long long b) {
    a = llabs(a); b = llabs(b);
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    long long a, b;
    cout << "Ingrese dos enteros: ";
    if (!(cin >> a >> b)) return 0;
    long long g = gcd(a, b);
    if (g == 0) {
        cout << "MCM indefinido (uno de los numeros es 0)." << endl;
        return 0;
    }
    long long m = llabs((a / g) * b); // minimizar overflow
    cout << "MCM = " << m << endl;
    return 0;
}
