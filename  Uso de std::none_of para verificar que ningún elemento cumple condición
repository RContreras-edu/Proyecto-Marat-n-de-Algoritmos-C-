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

    bool ninguno_negativo = none_of(vec.begin(), vec.end(), [](int x){ return x < 0; });

    if (ninguno_negativo)
        cout << "Ningún elemento es negativo.\n";
    else
        cout << "Hay elementos negativos.\n";

    return 0;
}
