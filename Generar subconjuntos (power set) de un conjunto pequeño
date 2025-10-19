#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    unsigned long long x;
    cout << "Ingrese entero sin signo (decimal): ";
    if (!(cin >> x)) return 0;
    int cnt = 0;
    while (x) {
        x &= (x - 1);
        ++cnt;
    }
    cout << "Cantidad de bits 1 = " << cnt << endl;
    return 0;
}
