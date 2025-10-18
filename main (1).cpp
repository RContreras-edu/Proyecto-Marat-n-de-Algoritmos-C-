#include <iostream>
int main() {
    int n, suma = 0;
    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: El número debe ser positivo." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        suma += (2*i - 1);
    }

    std::cout << "La suma de los primeros " << n << " números impares es: " << suma << std::endl;
    return 0;
}
