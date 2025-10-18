#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    set<int> elementos;
    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        elementos.insert(x);
    }

    cout << "Elementos sin duplicados: ";
    for (int elem : elementos)
        cout << elem << " ";
    cout << endl;

    return 0;
}

