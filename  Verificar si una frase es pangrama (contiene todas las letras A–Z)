#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    string linea;
    cout << "Ingrese una frase: ";
    getline(cin, linea);

    vector<bool> present(26, false);
    for (char ch : linea) {
        if (isalpha((unsigned char)ch)) {
            present[tolower((unsigned char)ch) - 'a'] = true;
        }
    }
    bool pangrama = true;
    for (bool b : present) if (!b) { pangrama = false; break; }

    cout << (pangrama ? "Es un pangrama." : "No es un pangrama.") << endl;
    return 0;
}
