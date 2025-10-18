#include <iostream>
int main() {
    int n;
    unsigned long long factorial = 1;
    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: El número debe ser positivo." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "El factorial de " << n << " es: " << factorial << std::endl;
    return 0;
}
