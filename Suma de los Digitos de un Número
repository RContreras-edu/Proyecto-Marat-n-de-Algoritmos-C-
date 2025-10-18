#include <iostream>
int main() {
    int n, suma = 0;
    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: El número debe ser positivo." << std::endl;
        return 1;
    }

    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }

    std::cout << "La suma de los dígitos es: " << suma << std::endl;
    return 0;
}
