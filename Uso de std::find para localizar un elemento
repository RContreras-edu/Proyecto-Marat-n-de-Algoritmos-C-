#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    cout << "Valor a buscar: ";
    cin >> val;

    auto it = find(vec.begin(), vec.end(), val);

    if (it != vec.end())
        cout << "Elemento encontrado en posición: " << distance(vec.begin(), it) << endl;
    else
        cout << "Elemento no encontrado.\n";

    return 0;
}
