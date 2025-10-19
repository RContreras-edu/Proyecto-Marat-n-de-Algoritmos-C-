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

    auto it = unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());

    cout << "Vector sin duplicados consecutivos: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}

