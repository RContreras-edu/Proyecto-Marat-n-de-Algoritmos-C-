#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Ingrese una palabra o frase: ";
    getline(cin, s);
    vector<bool> seen(26, false);
    for (char ch : s) {
        if (isalpha((unsigned char)ch)) {
            int idx = tolower((unsigned char)ch) - 'a';
            if (seen[idx]) {
                cout << "No es isograma.\n";
                return 0;
            }
            seen[idx] = true;
        }
    }
    cout << "Es isograma.\n";
    return 0;
}
