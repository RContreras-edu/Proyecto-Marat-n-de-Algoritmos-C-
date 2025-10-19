#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    cout << "Ingrese tamaño vector 1: ";
    cin >> n1;
    vector<int> v1(n1);
    cout << "Ingrese elementos vector 1:\n";
    for (int &x : v1) cin >> x;

    cout << "Ingrese tamaño vector 2: ";
    cin >> n2;
    vector<int> v2(n2);
    cout << "Ingrese elementos vector 2:\n";
    for (int &x : v2) cin >> x;

    if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end()))
        cout << "Vector 1 es lexicográficamente menor.\n";
    else
        cout << "Vector 1 no es lexicográficamente menor.\n";

    return 0;
}
