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

    partition(vec.begin(), vec.end(), [](int x){ return x % 2 == 0; });

    cout << "Vector con pares primero: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
