#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int k;
    cout << "Ingrese el texto (use espacios):\n";
    getline(cin, texto);
    cout << "Ingrese desplazamiento (k): ";
    cin >> k;
    k = ((k % 26) + 26) % 26; // normalizar entre 0..25

    for (char &c : texto) {
        if (c >= 'a' && c <= 'z') {
            c = char('a' + (c - 'a' + k) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            c = char('A' + (c - 'A' + k) % 26);
        }
    }
    cout << "Texto cifrado: " << texto << endl;
    return 0;
}

