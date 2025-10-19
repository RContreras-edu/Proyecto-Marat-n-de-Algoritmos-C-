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

    cout << "Valor a eliminar: ";
    cin >> val;

    vec.erase(remove(vec.begin(), vec.end(), val), vec.end());

    cout << "Vector resultante: ";
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    return 0;
}
