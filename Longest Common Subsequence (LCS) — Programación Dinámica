#include <iostream>
#include <vector>
#include <string>
using namespace std;

int LCS(const string& s1, const string& s2) {
    int n1 = s1.size(), n2 = s2.size();
    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
    for (int i = 1; i <= n1; ++i) {
        for (int j = 1; j <= n2; ++j) {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n1][n2];
}

int main() {
    string s1, s2;
    cout << "Cadena 1: ";
    cin >> s1;
    cout << "Cadena 2: ";
    cin >> s2;

    int longitud = LCS(s1, s2);
    cout << "Longitud de la LCS: " << longitud << endl;
    return 0;
}

