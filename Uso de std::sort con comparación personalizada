#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    sort(vec.begin(), vec.end(), greater<int>());

    cout << "Vector ordenado descendente: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
