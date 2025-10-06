#include <iostream>
int main() {
    double base, altura;
    std::cout << "Ingresa la base: ";
    std::cin >> base;
    std::cout << "Ingresa la altura: ";
    std::cin >> altura;

    double area = (base * altura) / 2;
    std::cout << "El área del triángulo es: " << area << std::endl;
    return 0;
}
