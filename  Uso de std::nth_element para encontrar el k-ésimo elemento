#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cout << "Ingrese tamaño vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    cout << "Ingrese k (posición): ";
    cin >> k;
    if (k < 1 || k > n) {
        cout << "Valor de k inválido.\n";
        return 1;
    }

    nth_element(vec.begin(), vec.begin() + k - 1, vec.end());

    cout << "El " << k << "-ésimo menor elemento es: " << vec[k - 1] << endl;

    return 0;
}
