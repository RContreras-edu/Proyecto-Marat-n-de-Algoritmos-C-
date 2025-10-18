#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cout << "Tamaño del primer arreglo: ";
    cin >> n1;
    vector<int> a(n1);
    cout << "Elementos del primer arreglo (ordenados): ";
    for (int i = 0; i < n1; ++i) cin >> a[i];

    cout << "Tamaño del segundo arreglo: ";
    cin >> n2;
    vector<int> b(n2);
    cout << "Elementos del segundo arreglo (ordenados): ";
    for (int i = 0; i < n2; ++i) cin >> b[i];

    vector<int> fusion;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) fusion.push_back(a[i++]);
        else fusion.push_back(b[j++]);
    }

    while (i < n1) fusion.push_back(a[i++]);
    while (j < n2
