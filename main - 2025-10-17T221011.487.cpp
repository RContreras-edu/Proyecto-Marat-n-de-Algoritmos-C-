#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i) cin >> vec[i];

    cout << "Vector invertido: ";
    for (int i = n - 1; i >= 0; --i)
        cout << vec[i] << " ";
    cout << endl;

    return 0;
}


