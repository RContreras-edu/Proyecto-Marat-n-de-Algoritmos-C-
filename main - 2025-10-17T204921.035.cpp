#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string linea;
    std::cout << "Ingrese una frase: ";
    std::getline(std::cin, linea);

    std::istringstream iss(linea);
    std::string palabra;
    int contador = 0;
    while (iss >> palabra) ++contador;

    std::cout << "Cantidad de palabras: " << contador << std::endl;
    return 0;
}
