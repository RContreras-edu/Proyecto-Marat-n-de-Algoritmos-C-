#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Cantidad de elementos ordenados: ";
    cin >> n;


    int arr[n];
    cout << "Ingrese los elementos ordenados: ";
    for (int i=0; i<n; i++)
        cin >> arr[i];


    if (n == 0) {
        cout << "Arreglo vacío." << endl;
        return 0;
    }


    int j = 0;
    for (int i=1; i<n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }


    int nuevoTam = j + 1;
    cout << "Arreglo sin duplicados: ";
    for (int i=0; i<nuevoTam; i++)
        cout << arr[i] << " ";
    cout << endl;

