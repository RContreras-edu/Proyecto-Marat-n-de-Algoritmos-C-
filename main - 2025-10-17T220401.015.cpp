#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    vector<int> a(n), b(n);
    cout << "Vector A: ";
    for (int i = 0; i < n; ++i) cin >> a[i];

    cout << "Vector B: ";
    for (int i = 0; i < n; ++i) cin >> b[i];

    vector<int> suma(n);
    for (int i = 0; i < n; ++i)
        suma[i] = a[i] + b[i];

    cout << "Vector suma: ";
    for (int x : suma) cout << x << " ";
    cout << endl;

    return 0;
}


