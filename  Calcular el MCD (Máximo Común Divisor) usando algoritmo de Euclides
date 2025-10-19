#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    long long a, b;
    cout << "Ingrese dos enteros: ";
    if (!(cin >> a >> b)) return 0;
    a = llabs(a); b = llabs(b);
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    cout << "MCD = " << a << endl;
    return 0;
}
