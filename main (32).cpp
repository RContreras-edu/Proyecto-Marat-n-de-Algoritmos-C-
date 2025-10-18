#include <iostream>
#include <vector>

int main() {
    int m, n;
    std::cout << "Filas y columnas (m n): ";
    std::cin >> m >> n;
    std::vector<std::vector<int>> A(m, std::vector<int>(n)), B(m, std::vector<int>(n));

    std::cout << "Ingresa matriz A (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) std::cin >> A[i][j];

    std::cout << "Ingresa matriz B (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) std::cin >> B[i][j];

    std::vector<std::vector<int>> C(m, std::vector<int>(n));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) C[i][j] = A[i][j] + B[i][j];

    std::cout << "Matriz suma C = A + B:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) std::cout << C[i][j] << " ";
        std::cout << "\n";
    }
    return 0;
}
