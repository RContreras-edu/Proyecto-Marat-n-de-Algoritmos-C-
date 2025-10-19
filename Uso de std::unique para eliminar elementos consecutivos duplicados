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

    auto last = unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());

    cout << "Vector sin duplicados consecutivos: ";
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    return 0;
}
