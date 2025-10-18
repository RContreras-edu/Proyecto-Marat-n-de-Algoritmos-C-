#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Ingrese cantidad de cadenas: ";
    cin >> N;
    cin.ignore();
    if (N <= 0) { cout << "Prefijo: \n"; return 0; }
    vector<string> s(N);
    for (int i = 0; i < N; ++i) { getline(cin, s[i]); }
    string pref = s[0];
    for (int i = 1; i < N; ++i) {
        while (!pref.empty() && s[i].find(pref) != 0) pref.pop_back();
    }
    cout << "Prefijo comun mas largo: \"" << pref << "\"\n";
    return 0;
}

