#include <iostream>
#include <vector>
using namespace std;

int contarPares(const vector<int>& v, int objetivo) {
    int cuenta = 0;
    for (int i = 0; i < v.size(); ++i)
        for (int j = i + 1; j < v.size(); ++j)
            if (v[i] + v[j] == objetivo)
                ++cuenta;
    return cuenta;
}

int main() {
    int n, objetivo;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> v(n);
    cout << "Elementos: ";
    for (int i = 0; i < n; ++i) cin >> v[i];

    cout << "Suma objetivo: ";
    cin >> objetivo;

    int resultado = contarPares(v, objetivo);
    cout << "Cantidad de pares: " << resultado << endl;

    return 0;
}



