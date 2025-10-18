#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Cantidad de elementos: ";
    std::cin >> n;
    std::vector<int> a(n);
    std::cout << "Ingrese " << n << " enteros:\n";
    for (int i = 0; i < n; ++i) std::cin >> a[i];

    int x;
    std::cout << "Valor a buscar: ";
    std::cin >> x;

    int pos = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) { pos = i + 1; break; } // posición 1-based
    }

    if (pos != -1) std::cout << "Encontrado en la posición: " << pos << std::endl;
    else std::cout << "No se encontró el valor.\n";

    return 0;
}
