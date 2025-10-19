#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    uint32_t x;
    cout << "Ingrese entero sin signo 32-bit (decimal): ";
    cin >> x;
    uint32_t r = 0;
    for (int i = 0; i < 32; ++i) {
        r = (r << 1) | (x & 1u);
        x >>= 1;
    }
    cout << "Entero con bits invertidos: " << r << endl;
    return 0;
}
