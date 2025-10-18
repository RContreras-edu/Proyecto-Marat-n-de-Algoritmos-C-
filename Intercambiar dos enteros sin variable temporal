#include <iostream>

int main() {
    int a, b;
    std::cout << "Ingrese a y b: ";
    std::cin >> a >> b;

    std::cout << "Original: a=" << a << " b=" << b << "\n";

    // Método XOR (seguro para enteros y sin overflow)
    a = a ^ b;
    b = a ^ b; // (a^b)^b = a
    a = a ^ b; // (a^b)^a = b

    std::cout << "Intercambiados (XOR): a=" << a << " b=" << b << "\n";

    return 0;
}
