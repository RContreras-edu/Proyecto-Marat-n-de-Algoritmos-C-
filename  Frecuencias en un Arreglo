#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    unordered_map<int, int> frec;
    for (int i = 0; i < n; ++i)
        frec[arr[i]]++;

    cout << "Frecuencias:" << endl;
    for (auto par : frec)
        cout << par.first << ": " << par.second << " veces" << endl;

    return 0;
}

