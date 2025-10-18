#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string linea;
    cout << "Ingrese una frase: ";
    getline(cin, linea);
    istringstream iss(linea);
    string token, mejor;
    int mejorLen = 0;
    while (iss >> token) {
        int cnt = 0;
        for (char c : token) if (isalpha((unsigned char)c)) ++cnt;
        if (cnt > mejorLen) { mejorLen = cnt; mejor = token; }
    }
    if (mejorLen == 0) cout << "No se encontro palabra valida.\n";
    else cout << "Palabra mas larga: " << mejor << " (longitud " << mejorLen << ")\n";
    return 0;
}
