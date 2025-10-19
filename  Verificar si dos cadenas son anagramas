#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s1, s2;
    cout << "Ingrese la primera cadena: ";
    getline(cin, s1);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, s2);

    vector<int> f1(26,0), f2(26,0);
    for(char c : s1) if(isalpha((unsigned char)c)) f1[tolower((unsigned char)c)-'a']++;
    for(char c : s2) if(isalpha((unsigned char)c)) f2[tolower((unsigned char)c)-'a']++;

    if (f1 == f2) cout << "Son anagramas\n";
    else cout << "No son anagramas\n";
    return 0;
}
