#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    cout << "Cantidad números ordenados: ";
    cin >> n;
    vector<int> vec(n);

    cout << "Ingrese números ordenados:\n";
    for (int &x : vec) cin >> x;

    cout << "Valor a insertar: ";
    cin >> val;

    auto it = upper_bound(vec.begin(), vec.end(), val);
    cout << "Posición para insertar (superior): " << distance(vec.begin(), it) << endl;

    return 0;
}

