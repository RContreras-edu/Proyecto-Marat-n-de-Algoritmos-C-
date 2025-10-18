#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int arr[100];
    cout << "Ingrese elementos:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j)
            if (arr[j] < arr[minIdx])
                minIdx = j;
        swap(arr[i], arr[minIdx]);
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

