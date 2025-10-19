#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arr[100];
    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int maximo = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] > maximo)
            maximo = arr[i];

    cout << "El número más grande es: " << maximo << endl;
    return 0;
}
