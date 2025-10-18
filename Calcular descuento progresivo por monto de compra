#include <iostream>
using namespace std;

int main() {
    float monto, descuento = 0;
    cout << "Ingrese el monto de la compra: $";
    cin >> monto;

    if (monto >= 50 && monto <= 100)
        descuento = 0.05;
    else if (monto <= 200)
        descuento = 0.10;
    else if (monto > 200)
        descuento = 0.15;

    float total = monto - (monto * descuento);

    cout << "Descuento aplicado: " << (descuento * 100) << "%" << endl;
    cout << "Total a pagar: $" << total << endl;
    return 0;
}
