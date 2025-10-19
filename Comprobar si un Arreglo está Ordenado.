#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;


    int arr[n];
    cout << "Ingrese los elementos: ";
    for (int i=0; i<n; i++)
        cin >> arr[i];


    int inicio = 0, fin = n-1;
    while (inicio < fin) {
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;
        inicio++;
        fin--;
    }


    cout << "Arreglo invertido: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;


    return 0;
}
