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

    stable_sort(vec.begin(), vec.end());

    cout << "Vector ordenado (estable): ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
