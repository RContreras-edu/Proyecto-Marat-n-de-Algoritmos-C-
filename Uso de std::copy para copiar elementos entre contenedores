#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Cantidad números: ";
    cin >> n;
    vector<int> origen(n);

    cout << "Ingrese números:\n";
    for (int &x : origen) cin >> x;

    vector<int> destino(n);
    copy(origen.begin(), origen.end(), destino.begin());

    cout << "Vector destino: ";
    for (int x : destino)
        cout << x << " ";
    cout << endl;

    return 0;
}
