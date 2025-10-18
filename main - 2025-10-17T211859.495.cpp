#include <iostream>
using namespace std;
int main() {
    double precio, descuento;
    cout << "Precio del producto: ";
    cin >> precio;
    cout << "Porcentaje de descuento: ";
    cin >> descuento;
    cout << "Precio final: " << precio - (precio * descuento / 100) << endl;
    return 0;
}
