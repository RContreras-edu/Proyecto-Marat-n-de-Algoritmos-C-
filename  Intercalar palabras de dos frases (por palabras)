#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Ingrese la primera frase:\n";
    getline(cin, s1);
    cout << "Ingrese la segunda frase:\n";
    getline(cin, s2);

    istringstream iss1(s1), iss2(s2);
    vector<string> v1, v2;
    string w;
    while (iss1 >> w) v1.push_back(w);
    while (iss2 >> w) v2.push_back(w);

    string res;
    size_t i = 0;
    while (i < v1.size() || i < v2.size()) {
        if (i < v1.size()) { if (!res.empty()) res += " "; res += v1[i]; }
        if (i < v2.size()) { if (!res.empty()) res += " "; res += v2[i]; }
        ++i;
    }
    cout << "Frase intercalada:\n" << res << endl;
    return 0;
}
