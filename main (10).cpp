#include <iostream>
int main() {
    int base, exponente;
    long long resultado = 1;

    std::cout << "Ingresa la base: ";
    std::cin >> base;
    std::cout << "Ingresa el exponente: ";
    std::cin >> exponente;

    for (int i = 1; i <= exponente; ++i) {
        resultado *= base;
    }

    std::cout << base << "^" << exponente << " = " << resultado << std::endl;
    return 0;
}
