#include <iostream>
#include <vector>
using namespace std;

int contarCaminos(const vector<vector<int>>& grid) {
    int m = grid.size();
    if (m == 0) return 0;
    int n = grid[0].size();
    vector<vector<long long>> dp(m, vector<long long>(n, 0));
    if (grid[0][0] == 1) return 0;
    dp[0][0] = 1;

    for (int i = 1; i < m; ++i)
        if (grid[i][0] == 0) dp[i][0] = dp[i - 1][0];

    for (int j = 1; j < n; ++j)
        if (grid[0][j] == 0) dp[0][j] = dp[0][j - 1];

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (grid[i][j] == 0)
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m - 1][n - 1];
}

int main() {
    int m, n;
    cout << "Filas: ";
    cin >> m;
    cout << "Columnas: ";
    cin >> n;
    vector<vector<int>> grid(m, vector<int>(n));
    cout << "Ingrese la matriz (0 libre, 1 obstáculo):\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];

    int caminos = contarCaminos(grid);
    cout << "Número de caminos posibles: " << caminos << endl;
    return 0;
}

