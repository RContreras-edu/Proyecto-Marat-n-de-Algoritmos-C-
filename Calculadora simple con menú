#include <iostream>
#include <cmath>

int main() {
    int opcion;
    do {
        std::cout << "\n--- Calculadora ---\n"
                  << "1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n5) Potencia (a^b)\n0) Salir\nElige opcion: ";
        std::cin >> opcion;

        if (opcion == 0) break;

        double a, b;
        std::cout << "Ingresa dos números: ";
        std::cin >> a >> b;

        switch (opcion) {
            case 1: std::cout << "Resultado: " << (a + b) << "\n"; break;
            case 2: std::cout << "Resultado: " << (a - b) << "\n"; break;
            case 3: std::cout << "Resultado: " << (a * b) << "\n"; break;
            case 4:
                if (b == 0) std::cout << "Error: división por cero.\n";
                else std::cout << "Resultado: " << (a / b) << "\n";
                break;
            case 5: std::cout << "Resultado: " << std::pow(a, b) << "\n"; break;
            default: std::cout << "Opción inválida.\n";
        }
    } while (true);

    std::cout << "Saliendo...\n";
    return 0;
}
