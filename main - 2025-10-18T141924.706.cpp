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

    bool ninguno_cero = none_of(vec.begin(), vec.end(), [](int x){ return x == 0; });

    if (ninguno_cero)
        cout << "Ningún número es cero.\n";
    else
        cout << "Hay al menos un cero.\n";

    return 0;
}

