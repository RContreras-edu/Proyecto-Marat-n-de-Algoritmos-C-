#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    cout << "Cantidad de números: ";
    cin >> n;
    vector<int> vec(n);

    cout << "Ingrese números:\n";
    for (int &x : vec) cin >> x;

    cout << "Número a buscar: ";
    cin >> val;

    auto it = find(vec.begin(), vec.end(), val);
    if (it != vec.end()) {
        cout << "Encontrado en índice " << distance(vec.begin(), it) << endl;
    } else {
        cout << "No encontrado\n";
    }

    return 0;
}
