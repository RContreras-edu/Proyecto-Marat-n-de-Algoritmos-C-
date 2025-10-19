#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arr[100];
    cout << "Ingrese los elementos:\n";
    for (int i

= 0; i < n; ++i)
 cin >> arr[i];
for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
        if (arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

cout << "Arreglo ordenado: ";
for (int i = 0; i < n; ++i)
    cout << arr[i] << " ";
cout << endl;

return 0;

}
