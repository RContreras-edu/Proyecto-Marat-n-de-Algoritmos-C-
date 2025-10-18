#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Número de plantas a fertilizar: ";
    cin >> n;

    double total = 0;
    for (int i = 1; i <= n; i++) {
        double gramos;
        cout << "Fertilizante usado en planta " << i << " (g): ";
        cin >> gramos;
        total += gramos * 0.02; // $0.02 por gramo
    }

    cout << fixed << setprecision(2);
    cout << "Costo total: $" << total << endl;
    return 0;
}
