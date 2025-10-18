#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int n;
    std::cout << "Ingrese la cantidad de elementos: ";
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];

    std::unordered_set<int> seen;
    std::vector<int> result;
    for (int x : a) {
        if (seen.insert(x).second) // si fue insertado por primera vez
            result.push_back(x);
    }

    std::cout << "Arreglo sin duplicados: ";
    for (int v : result) std::cout << v << " ";
    std::cout << std::endl;
    return 0;
}
