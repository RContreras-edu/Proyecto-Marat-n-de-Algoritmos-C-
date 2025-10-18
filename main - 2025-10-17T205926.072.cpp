#include <iostream>
using namespace std;

int main() {
    unsigned long long n;
    cout << "Ingrese entero positivo: ";
    if (!(cin >> n)) return 0;
    if (n > 0 && (n & (n - 1)) == 0) cout << n << " es potencia de dos.\n";
    else cout << n << " NO es potencia de dos.\n";
    return 0;
}
