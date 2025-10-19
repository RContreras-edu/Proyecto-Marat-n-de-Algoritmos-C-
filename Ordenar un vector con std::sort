#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de números: ";
    cin >> n;
    vector<int> vec(n);

    cout << "Ingrese los números:\n";
    for (int &x : vec) cin >> x;

    sort(vec.begin(), vec.end());

    cout << "Vector ordenado: ";
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    return 0;
}
