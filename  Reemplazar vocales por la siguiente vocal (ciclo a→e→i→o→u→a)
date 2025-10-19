#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char nextVowel(char c) {
    bool isUpper = isupper((unsigned char)c);
    char l = tolower((unsigned char)c);
    char r;
    if (l == 'a') r = 'e';
    else if (l == 'e') r = 'i';
    else if (l == 'i') r = 'o';
    else if (l == 'o') r = 'u';
    else if (l == 'u') r = 'a';
    else r = c;
    return isUpper ? toupper(r) : r;
}

int main() {
    string s;
    cout << "Ingrese una cadena: ";
    getline(cin, s);
    for (char &c : s) {
        char lc = tolower((unsigned char)c);
        if (lc=='a' || lc=='e' || lc=='i' || lc=='o' || lc=='u')
            c = nextVowel(c);
    }
    cout << "Resultado: " << s << endl;
    return 0;
}
