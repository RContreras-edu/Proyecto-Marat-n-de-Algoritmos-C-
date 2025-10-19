#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cout << "Ingrese N (cantidad de valores positivos): ";
    std::cin >> N;
    if (N <= 0) return 0;

    long double prod = 1.0L;
    for (int i = 0; i < N; ++i) {
        long double x;
        std::cout << "Valor " << i+1 << ": ";
        std::cin >> x;
        if (x <= 0) {
            std::cout << "Todos los valores deben ser positivos." << std::endl;
            return 0;
        }
        prod *= x;
    }

    long double geo = pow(prod, 1.0L / N);
    std::cout << "Media geometrica: " << (double)geo << std::endl;
    return 0;
}
