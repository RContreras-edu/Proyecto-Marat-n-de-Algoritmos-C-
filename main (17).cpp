#include <iostream>
int main() {
    double nota, suma = 0;
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Ingresa la calificación " << i << ": ";
        std::cin >> nota;
        suma += nota;
    }

    double promedio = suma / 5;
    std::cout << "Promedio: " << promedio << std::endl;

    if (promedio >= 7)
        std::cout << "El estudiante aprobó." << std::endl;
    else
        std::cout << "El estudiante reprobó." << std::endl;

    return 0;
}
