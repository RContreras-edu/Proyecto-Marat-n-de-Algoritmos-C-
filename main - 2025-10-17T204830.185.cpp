#include <iostream>
#include <vector>

int main() {
    int monto;
    std::cout << "Ingrese el monto entero: ";
    std::cin >> monto;
    if (monto < 0) {
        std::cout << "Monto invalido." << std::endl;
        return 0;
    }

    std::vector<int> denom = {100, 50, 20, 10, 5, 1};
    for (int d : denom) {
        int c = monto / d;
        if (c > 0) {
            std::cout << d << " : " << c << std::endl;
            monto %= d;
        } else {
            std::cout << d << " : " << 0 << std::endl;
        }
    }
    return 0;
}
