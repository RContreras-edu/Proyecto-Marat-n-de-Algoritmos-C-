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
    string palabra;
    int palabras = 0;
    int sumaLen = 0;
    while (iss >> palabra) {
        int cnt = 0;
        for (char c : palabra) if (isalpha((unsigned char)c)) ++cnt;
        sumaLen += cnt;
        ++palabras;
    }
    if (palabras == 0) { cout << "No hay palabras.\n"; return 0; }
    cout << "Longitud promedio de palabras: " << (double)sumaLen / palabras << endl;
    return 0;
}
