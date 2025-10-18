#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cout << "Ingrese tamaño del primer arreglo: ";
    std::cin >> n;
    std::vector<int> A(n);
    std::cout << "Ingrese elementos ordenados del primer arreglo:\n";
    for (int i = 0; i < n; ++i) std::cin >> A[i];

    std::cout << "Ingrese tamaño del segundo arreglo: ";
    std::cin >> m;
    std::vector<int> B(m);
    std::cout << "Ingrese elementos ordenados del segundo arreglo:\n";
    for (int j = 0; j < m; ++j) std::cin >> B[j];

    std::vector<int> C;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (A[i] <= B[j]) C.push_back(A[i++]);
        else C.push_back(B[j++]);
    }
    while (i < n) C.push_back(A[i++]);
    while (j < m) C.push_back(B[j++]);

    std::cout << "Arreglo fusionado: ";
    for (int x : C) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
