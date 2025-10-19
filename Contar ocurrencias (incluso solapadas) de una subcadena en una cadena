#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, pat;
    cout << "Ingrese el texto: ";
    getline(cin, text);
    cout << "Ingrese la subcadena a buscar: ";
    getline(cin, pat);
    if (pat.empty()) { cout << "Subcadena vacia.\n"; return 0; }
    int cnt = 0;
    for (size_t i = 0; i + pat.size() <= text.size(); ++i) {
        if (text.compare(i, pat.size(), pat) == 0) ++cnt;
    }
    cout << "Ocurrencias (incluyendo solapadas): " << cnt << endl;
    return 0;
}
