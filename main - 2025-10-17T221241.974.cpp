#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, num;
    set<int> s;
    bool duplicado = false;

    cout << "Cantidad de elementos: ";
    cin >> n;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (s.count(num)) {
            duplicado = true;
            break;
        }
        s.insert(num);
    }

    if (duplicado)
        cout << "Hay elementos duplicados." << endl;
    else
        cout << "Todos los elementos son únicos." << endl;

    return 0;
}



