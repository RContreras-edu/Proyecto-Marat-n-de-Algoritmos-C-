#include <iostream>
#include <string>
using namespace std;

void permutar(string &s, int l, int r) {
    if (l == r) { cout << s << '\n'; return; }
    for (int i = l; i <= r; ++i) {
        swap(s[l], s[i]);
        permutar(s, l+1, r);
        swap(s[l], s[i]); // backtrack
    }
}

int main() {
    string s;
    cout << "Ingrese una cadena (longitud aconsejada <=8): ";
    getline(cin, s);
    if (s.size() > 9) cout << "Aviso: muchas permutaciones, continuo bajo su responsabilidad.\n";
    permutar(s, 0, (int)s.size() - 1);
    return 0;
}
