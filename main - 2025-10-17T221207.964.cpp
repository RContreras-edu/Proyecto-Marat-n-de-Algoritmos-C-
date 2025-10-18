#include <iostream>
#include <vector>
using namespace std;

void seleccion(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j)
            if (v[j] < v[minIdx]) minIdx = j;
        swap(v[i], v[minIdx]);
    }
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> v(n);
    cout << "Elementos: ";
    for (int i = 0; i < n; ++i) cin >> v[i];

    seleccion(v);

    cout << "Vector ordenado: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}



