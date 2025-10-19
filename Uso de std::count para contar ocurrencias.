#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    cout << "Ingrese tamaño vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    cout << "Valor a contar: ";
    cin >> val;

    int count_val = count(vec.begin(), vec.end(), val);

    cout << "El valor " << val << " aparece " << count_val << " veces.\n";

    return 0;
}
