#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Cantidad de elementos: ";
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];

    std::sort(a.begin(), a.end());

    int x;
    std::cout << "Valor a buscar: ";
    std::cin >> x;

    int l = 0, r = n - 1;
    int pos = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x) { pos = m + 1; break; }
        else if (a[m] < x) l = m + 1;
        else r = m - 1;
    }

    if (pos != -1) std::cout << "Encontrado en posición (ordenada): " << pos << std::endl;
    else std::cout << "No se encontró el valor en el arreglo ordenado.\n";

    return 0;
}
