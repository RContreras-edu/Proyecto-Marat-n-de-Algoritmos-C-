#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    int N;
    std::cout << "Ingrese la longitud de la contraseña: ";
    std::cin >> N;
    if (N <= 0) return 0;

    std::string charset = "abcdefghijklmnopqrstuvwxyz"
                          "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          "0123456789";
    std::srand((unsigned)std::time(nullptr));
    std::string pass;
    for (int i = 0; i < N; ++i) {
        int idx = std::rand() % charset.size();
        pass.push_back(charset[idx]);
    }
    std::cout << "Contraseña generada: " << pass << std::endl;
    return 0;
}
