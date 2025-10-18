#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double balance = 0.0;
    vector<string> hist;
    int opc;
    do {
        cout << "\nMenu: 1=depositar,2=retirar,3=balance,4=historial,0=salir: ";
        cin >> opc;
        if (opc == 1) {
            double x; cout << "Monto a depositar: "; cin >> x;
            if (x <= 0) cout << "Monto invalido.\n";
            else { balance += x; hist.push_back("Dep: +" + to_string(x)); }
        } else if (opc == 2) {
            double x; cout << "Monto a retirar: "; cin >> x;
            if (x <= 0) cout << "Monto invalido.\n";
            else if (x > balance) cout << "Saldo insuficiente.\n";
            else { balance -= x; hist.push_back("Ret: -" + to_string(x)); }
        } else if (opc == 3) {
            cout << fixed << setprecision(2) << "Balance: $" << balance << endl;
        } else if (opc == 4) {
            cout << "Historial:\n";
            for (auto &t : hist) cout << t << endl;
        }
    } while (opc != 0);
    return 0;
}
