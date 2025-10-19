#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;

    int arr[100];
    cout << "Ingrese elementos:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int maximo = arr[0];
    int minimo = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > maximo)
            maximo = arr[i];
        if (arr[i] < minimo)
            minimo = arr[i];
    }
