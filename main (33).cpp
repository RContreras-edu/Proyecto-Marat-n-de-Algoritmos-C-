#include <iostream>
#include <vector>

int main() {
    int m, n;
    std::cout << "Filas y columnas (m n): ";
    std::cin >> m >> n;
    std::vector<std::vector<int>> A(m, std::vector<int>(n));
    std::cout << "Ingresa matriz A:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) std::cin >> A[i][j];

    std::vector<std::vector<int>> T(n, std::vector<int>(m));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) T[j][i] = A[i][j];

    std::cout << "Transpuesta:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) std::cout << T[i][j] << " ";
        std::cout << "\n";
    }
    return 0;
}
