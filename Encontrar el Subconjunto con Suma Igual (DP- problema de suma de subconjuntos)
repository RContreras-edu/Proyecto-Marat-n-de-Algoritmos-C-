#include <iostream>
#include <vector>
using namespace std;

bool subsetSum(const vector<int>& arr, int objetivo) {
    int n = arr.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(objetivo + 1, false));
    for (int i = 0; i <= n; ++i)
        dp[i][0] = true;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= objetivo; ++j) {
            if (arr[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
        }
    }
    return dp[n][objetivo];
}

int main() {
    int n, objetivo;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Elementos: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout << "Suma objetivo: ";
    cin >> objetivo;

    bool existe = subsetSum(arr, objetivo);
    if (existe) cout << "Sí, existe un subconjunto con esa suma." << endl;
    else cout << "No existe tal subconjunto." << endl;

    return 0;
}
