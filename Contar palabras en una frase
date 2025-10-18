#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string linea;
    std::cout << "Ingresa una frase: ";
    std::getline(std::cin, linea);

    std::istringstream iss(linea);
    std::string palabra;
    int contador = 0;
    while (iss >> palabra) ++contador;

    std::cout << "Número de palabras: " << contador << std::endl;
    return 0;
}
