#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Ingrese tamaño n de la matriz cuadrada: ";
    std::cin >> n;
    std::vector<std::vector<int>> A(n, std::vector<int>(n));
    std::cout << "Ingrese elementos fila por fila:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> A[i][j];

    bool sim = true;
    for (int i = 0; i < n && sim; ++i)
        for (int j = i+1; j < n; ++j)
            if (A[i][j] != A[j][i]) { sim = false; break; }

    if (sim) std::cout << "La matriz es simetrica." << std::endl;
    else std::cout << "La matriz NO es simetrica." << std::endl;
    return 0;
}
