#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    cout << "Cantidad números: ";
    cin >> n;
    vector<int> vec(n);

    cout << "Ingrese números:\n";
    for (int &x : vec) cin >> x;

    cout << "Valor a contar: ";
    cin >> val;

    int cantidad = count(vec.begin(), vec.end(), val);
    cout << "El valor " << val << " aparece " << cantidad << " veces.\n";

    return 0;
}
