#include <iostream>
#include <vector>
#include <string>
using namespace std;

int minCutsPalindrome(string s) {
    int n = s.size();
    vector<vector<bool>> isPal(n, vector<bool>(n, false));
    for (int i = n - 1; i >= 0; --i) {
        for (int j = i; j < n; ++j) {
            if (s[i] == s[j] && (j - i < 2 || isPal[i + 1][j - 1]))
                isPal[i][j] = true;
        }
    }
    vector<int> cuts(n, INT_MAX);
    for (int i = 0; i < n; ++i) {
        if (isPal[0][i]) {
            cuts[i] = 0;
        } else {
            for (int j = 1; j <= i; ++j) {
                if (isPal[j][i] && cuts[j - 1] + 1 < cuts[i]) {
                    cuts[i] = cuts[j - 1] + 1;
                }
            }
        }
    }
    return cuts[n - 1];
}

int main() {
    string s;
    cout << "Ingrese cadena: ";
    cin >> s;

    int resultado = minCutsPalindrome(s);
    cout << "Mínimo número de cortes: " << resultado << endl;
    return 0;
}

