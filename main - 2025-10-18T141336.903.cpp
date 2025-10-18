#include <iostream>
using namespace std;

int main() {
    int n, val;
    cout << "Cantidad elementos: ";
    cin >> n;

    int arr[100];
    cout << "Ingrese elementos:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Ingrese valor a buscar: ";
    cin >> val;

    int pos = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == val) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        cout << "Valor no encontrado.\n";
    else
        cout << "Valor encontrado en índice " << pos << endl;

    return 0;
}

