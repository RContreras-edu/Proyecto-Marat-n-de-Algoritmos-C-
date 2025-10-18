#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    std::cout << "Ingrese la primera cadena: ";
    std::getline(std::cin, s1);
    std::cout << "Ingrese la segunda cadena: ";
    std::getline(std::cin, s2);

    if (s1.size() != s2.size()) {
        std::cout << "No son rotaciones." << std::endl;
        return 0;
    }

    std::string doble = s1 + s1;
    if (doble.find(s2) != std::string::npos)
        std::cout << "Sí, son rotaciones." << std::endl;
    else
        std::cout << "No, no son rotaciones." << std::endl;

    return 0;
}
