#include <iostream>
int main() {
    int anio;
    std::cout << "Ingrese un año: ";
    std::cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
        std::cout << "El año es bisiesto.";
    else
        std::cout << "El año no es bisiesto.";
    return 0;
}
