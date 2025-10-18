#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    bool todos_positivos = all_of(vec.begin(), vec.end(), [](int x){ return x > 0; });

    if (todos_positivos)
        cout << "Todos los elementos son positivos.\n";
    else
        cout << "No todos los elementos son positivos.\n";

    return 0;
}
