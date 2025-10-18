#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    int vocales = 0;
    for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vocales++;
    }

    cout << "Número de vocales: " << vocales << endl;
    return 0;
}
