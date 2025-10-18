#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    bool hay_par = any_of(vec.begin(), vec.end(), [](int x){ return x % 2 == 0; });

    if (hay_par)
        cout << "Hay al menos un número par.\n";
    else
        cout << "No hay números pares.\n";

    return 0;
}
