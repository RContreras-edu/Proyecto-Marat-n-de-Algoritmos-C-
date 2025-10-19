#include <iostream>
#include <vector>
using namespace std;

void insercion(vector<int>& v) {
    for (int i = 1; i < v.size(); ++i) {
        int clave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > clave) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = clave;
    }
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> v(n);
    cout << "Elementos: ";
    for (int i = 0; i < n; ++i) cin >> v[i];

    insercion(v);

    cout << "Vector ordenado: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}


