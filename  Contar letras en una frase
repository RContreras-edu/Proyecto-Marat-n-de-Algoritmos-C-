#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string frase;
    int contador = 0;

    cout << "Ingresa una frase: ";
    getline(cin, frase);

    for (char c : frase) {
        if (isalpha(c)) {
            contador++;
        }
    }

    cout << "La frase tiene " << contador << " letras." << endl;
    return 0;
}
