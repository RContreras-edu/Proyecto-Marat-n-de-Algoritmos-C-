#include <iostream>
int main() {
    int a, b, c;
    std::cout << "Ingresa tres números: ";
    std::cin >> a >> b >> c;

    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    std::cout << "El número mayor es: " << mayor << std::endl;
    return 0;
}
