#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    vector<int> resultado(n);
    transform(vec.begin(), vec.end(), resultado.begin(), [](int x){ return x * x; });

    cout << "Elementos al cuadrado: ";
    for (int x : resultado) cout << x << " ";
    cout << endl;

    return 0;
}

