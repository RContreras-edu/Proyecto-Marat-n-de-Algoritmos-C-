#include <iostream>
#include <vector>

int main() {
    int monto;
    std::cout << "Ingresa el monto en centavos (ej. 187): ";
    std::cin >> monto;

    std::vector<int> monedas = {100, 50, 25, 10, 5, 1};
    std::vector<int> cuenta(monedas.size(), 0);

    for (size_t i = 0; i < monedas.size(); ++i) {
        if (monto <= 0) break;
        cuenta[i] = monto / monedas[i];
        monto %= monedas[i];
    }

    std::cout << "Cambio:\n";
    for (size_t i = 0; i < monedas.size(); ++i) {
        std::cout << monedas[i] << "c: " << cuenta[i] << "\n";
    }
    if (monto > 0) std::cout << "Restante: " << monto << " centavos (no se pudo cambiar completamente)\n";

    return 0;
}
