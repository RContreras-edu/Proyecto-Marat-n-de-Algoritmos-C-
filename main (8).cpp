#include <iostream>
int main() {
    int n;
    double suma = 0;
    std::cout << "Ingresa la cantidad de números: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        double num;
        std::cout << "Ingresa un número: ";
        std::cin >> num;
        suma += num;
    }

    std::cout << "El promedio es: " << suma/n << std::endl;
    return 0;
}
