#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese numero de filas (N): ";
    cin >> N;
    if (N <= 0) return 0;

    vector<int> row;
    for (int i = 0; i < N; ++i) {
        vector<int> next(i+1, 1);
        for (int j = 1; j < i; ++j) next[j] = row[j-1] + row[j];
        for (int x : next) cout << x << " ";
        cout << endl;
        row = move(next);
    }
    return 0;
}
