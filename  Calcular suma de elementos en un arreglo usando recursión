#include <iostream>
using namespace std;

int suma(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n-1] + suma(arr, n-1);
}

int main() {
    int n;
    cout << "Cantidad elementos: ";
    cin >> n;

    int arr[100];
    cout << "Ingrese elementos:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Suma de elementos: " << suma(arr, n) << endl;
    return 0;
}

