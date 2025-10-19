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

    partition(vec.begin(), vec.end(), [](int x){ return x % 2 == 0; });

    cout << "Vector particionado (pares al inicio): ";
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    return 0;
}

