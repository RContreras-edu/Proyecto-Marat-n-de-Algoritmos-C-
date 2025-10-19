#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    vector<int> arr(n);


    cout << "Ingrese los elementos ordenados: ";
    for (int &x : arr) cin >> x;


    double mediana;
    if (n % 2 == 1)
        mediana = arr[n / 2];
    else
        mediana = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;


    cout << "La mediana es: " << mediana << endl;
    return 0;
}

