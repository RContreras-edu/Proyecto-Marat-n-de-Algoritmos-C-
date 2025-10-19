#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string texto;
    map<char, int> freq;

    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    for (char c : texto)
        if (c != ' ') freq[c]++;

    cout << "Frecuencia de caracteres:\n";
    for (auto par : freq)
        cout << par.first << ": " << par.second << endl;

    return 0;
}


