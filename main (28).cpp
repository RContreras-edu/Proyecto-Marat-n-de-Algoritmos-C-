#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Cantidad de elementos: ";
    std::cin >> n;
    std::vector<int> a(n);
    std::cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; ++i) std::cin >> a[i];

    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; ++j) {
            if (a[j] > a[j+1]) {
                std::swap(a[j], a[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break; // optimización
    }

    std::cout << "Array ordenado: ";
    for (int v : a) std::cout << v << " ";
    std::cout << std::endl;
    return 0;
}
