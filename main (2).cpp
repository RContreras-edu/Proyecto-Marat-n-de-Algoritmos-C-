#include <iostream>
int main() {
    int n;
    bool primo = true;

    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> n;

    if (n < 2) primo = false;
    else {
        for (int i = 2; i < n; ++i)
            if (n % i == 0) primo = false;
    }

    if (primo) std::cout << n << " es un número primo.";
    else std::cout << n << " no es un número primo.";
    return 0;
}
