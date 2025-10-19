#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int k;
    cout << "Ingrese desplazamiento k (positivo o negativo): ";
    cin >> k;
    cin.ignore();
    string s;
    cout << "Ingrese texto: ";
    getline(cin, s);
    for (char &c : s) {
        if (isalpha((unsigned char)c)) {
            char base = isupper((unsigned char)c) ? 'A' : 'a';
            c = base + ( (c - base) + (k % 26) + 26 ) % 26;
        }
    }
    cout << "Texto cifrado: " << s << endl;
    return 0;
}
