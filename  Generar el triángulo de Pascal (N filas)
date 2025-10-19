#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese numero de filas N: ";
    if (!(cin >> N) || N <= 0) return 0;
    vector<int> prev;
    for (int r = 0; r < N; ++r) {
        vector<int> row(r + 1, 1);
        for (int j = 1; j < r; ++j) row[j] = prev[j-1] + prev[j];
        for (int x : row) cout << x << " ";
        cout << endl;
        prev = row;
    }
    return 0;
}
