#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de números: ";
    cin >> n;

    double arr[100];
    cout << "Ingrese los números:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    double suma = 0;
    for (int i = 0; i < n; ++i)
        suma += arr[i];

    double promedio = suma / n;

    double varianza = 0;
    for (int i = 0; i < n; ++i)
        varianza += (arr[i] - promedio) * (arr[i] - promedio);

    varianza /= n;
    double desviacion = sqrt(varianza);

    cout << "Promedio: " << promedio << "\nDesviación estándar: " << desviacion << endl;

    return 0;
}
