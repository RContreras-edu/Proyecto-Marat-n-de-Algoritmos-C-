#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int maxActual = arr[0], maxGlobal = arr[0];

    for (int i = 1; i < n; ++i) {
        maxActual = max(arr[i], maxActual + arr[i]);
        maxGlobal = max(maxGlobal, maxActual);
    }

    cout << "Máxima suma de subarreglo: " << maxGlobal << endl;

    return 0;
}
