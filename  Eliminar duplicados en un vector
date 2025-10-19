#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Cantidad elementos: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Ingrese elementos:\n";
    for (int &x : arr)
        cin >> x;

    unordered_set<int> vistos;
    vector<int> sinDuplicados;

    for (int x : arr) {
        if (vistos.find(x) == vistos.end()) {
            sinDuplicados.push_back(x);
            vistos.insert(x);
        }
    }

    cout << "Arreglo sin duplicados: ";
    for (int x : sinDuplicados)
        cout << x << " ";
    cout << endl;
    return 0;
}
