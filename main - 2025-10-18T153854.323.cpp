#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño vector origen: ";
    cin >> n;
    vector<int> origen(n);
    cout << "Ingrese elementos:\n";
    for (int &x : origen) cin >> x;

    vector<int> destino;
    copy(origen.begin(), origen.end(), back_inserter(destino));

    cout << "Vector destino: ";
    for (int x : destino) cout << x << " ";
    cout << endl;

    return 0;
}
