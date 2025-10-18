#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    if (n <= 0) { cout << "Nada que codificar.\n"; return 0; }
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int cur = a[0], cnt = 1;
    cout << "RLE: ";
    for (int i = 1; i < n; ++i) {
        if (a[i] == cur) ++cnt;
        else {
            cout << "(" << cur << "," << cnt << ") ";
            cur = a[i]; cnt = 1;
        }
    }
    cout << "(" << cur << "," << cnt << ")\n";
    return 0;
}
