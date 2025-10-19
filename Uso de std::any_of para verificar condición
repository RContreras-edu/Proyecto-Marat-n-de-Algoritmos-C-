#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Cantidad números: ";
    cin >> n;
    vector<int> vec(n);

    cout << "Ingrese números:\n";
    for (int &x : vec) cin >> x;

    bool hay_negativo = any_of(vec.begin(), vec.end(), [](int x){ return x < 0; });

    if (hay_negativo)
        cout << "Hay al menos un número negativo.\n";
    else
        cout << "No hay números negativos.\n";

    return 0;
}

