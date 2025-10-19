#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "1. Galletas ($1.50)\n2. Jugo ($2.00)\n3. Agua ($1.00)\n";
    int opcion;
    double dinero;
    cout << "Seleccione producto: ";
    cin >> opcion;
    cout << "Ingrese dinero: $";
    cin >> dinero;

    double precio = 0;
    if (opcion == 1) precio = 1.5;
    else if (opcion == 2) precio = 2.0;
    else precio = 1.0;

    if (dinero >= precio)
        cout << "Su cambio: $" << fixed << setprecision(2) << dinero - precio << endl;
    else
        cout << "Dinero insuficiente." << endl;
    return 0;
}
