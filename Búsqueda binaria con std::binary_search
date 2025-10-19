#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    cout << "Cantidad de números: ";
    cin >> n;
    vector<int> vec(n);

    cout << "Ingrese números ordenados:\n";
    for (int &x : vec) cin >> x;

    cout << "Número a buscar: ";
    cin >> val;

    bool encontrado = binary_search(vec.begin(), vec.end(), val);

    if (encontrado)
        cout << val << " está en el vector.\n";
    else
        cout << val << " no está en el vector.\n";

    return 0;
}

