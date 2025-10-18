#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string s;
    std::cout << "Ingrese una frase: ";
    std::getline(std::cin, s);

    std::string t;
    for (char c : s) {
        if (std::isalnum(static_cast<unsigned char>(c))) {
            t += std::tolower(static_cast<unsigned char>(c));
        }
    }

    bool pal = true;
    for (size_t i = 0, j = t.size() ? t.size()-1 : 0; i < j; ++i, --j) {
        if (t[i] != t[j]) { pal = false; break; }
    }

    if (pal) std::cout << "Es palíndromo.\n";
    else std::cout << "No es palíndromo.\n";

    return 0;
}
