#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Ingrese ISBN-10 (puede incluir guiones): ";
    getline(cin, s);
    string t;
    for (char c : s) if (c != '-') t.push_back(c);
    if (t.size() != 10) { cout << "ISBN invalido (longitud).\n"; return 0; }

    int suma = 0;
    for (int i = 0; i < 10; ++i) {
        int val = 0;
        if (i == 9 && (t[i] == 'X' || t[i] == 'x')) val = 10;
        else if (t[i] >= '0' && t[i] <= '9') val = t[i] - '0';
        else { cout << "ISBN invalido (caracteres).\n"; return 0; }
        suma += (i + 1) * val;
    }
    if (suma % 11 == 0) cout << "ISBN-10 valido.\n";
    else cout << "ISBN-10 invalido.\n";
    return 0;
}
