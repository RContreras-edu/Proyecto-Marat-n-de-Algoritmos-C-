#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    cout << "Tamaño vector 1: ";
    cin >> n1;
    vector<int> v1(n1);
    cout << "Ingrese elementos vector 1 ordenados:\n";
    for (int &x : v1) cin >> x;

    cout << "Tamaño vector 2: ";
    cin >> n2;
    vector<int> v2(n2);
    cout << "Ingrese elementos vector 2 ordenados:\n";
    for (int &x : v2) cin >> x;

    vector<int> interseccion(min(n1,n2));
    auto it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), interseccion.begin());
    interseccion.resize(it - interseccion.begin());

    cout << "Intersección: ";
    for (int x : interseccion) cout << x << " ";
    cout << endl;

    return 0;
}
