#include <iostream>
int main() {
    int n, a = 0, b = 1, c;
    std::cout << "Ingresa cuántos números de Fibonacci mostrar: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        std::cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    std::cout << std::endl;
    return 0;
}
