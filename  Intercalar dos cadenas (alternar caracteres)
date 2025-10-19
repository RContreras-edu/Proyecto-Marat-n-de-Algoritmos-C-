#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Ingrese primera cadena: ";
    getline(cin, s1);
    cout << "Ingrese segunda cadena: ";
    getline(cin, s2);

    string res;
    size_t i = 0;
    while (i < s1.size() || i < s2.size()) {
        if (i < s1.size()) res.push_back(s1[i]);
        if (i < s2.size()) res.push_back(s2[i]);
        ++i;
    }
    cout << "Cadena intercalada: " << res << endl;
    return 0;
}
