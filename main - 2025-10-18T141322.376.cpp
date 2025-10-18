#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Cantidad elementos: ";
    cin >> n;

    int arr[100];
    cout << "Ingrese elementos:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN)
        cout << "No hay segundo mayor.\n";
    else
        cout << "Segundo número más grande: " << max2 << endl;

    return 0;
}
