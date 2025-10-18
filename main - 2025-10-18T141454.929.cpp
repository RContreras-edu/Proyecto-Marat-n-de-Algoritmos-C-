#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;
    int num;
    char opcion;

    do {
        cout << "Ingrese un número: ";
        cin >> num;
        numeros.push_back(num);

        cout << "¿Desea ingresar otro número? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Números ingresados: ";
    for (int n : numeros)
        cout << n << " ";
    cout << endl;

    return 0;
}
