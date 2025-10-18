#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int H, M, delta;
    char colon;
    cout << "Ingrese hora inicial (HH:MM): ";
    cin >> H >> colon >> M;
    cout << "Ingrese minutos a sumar (puede ser negativo): ";
    cin >> delta;

    int total = H * 60 + M + delta;
    total %= 1440;
    if (total < 0) total += 1440;
    int nh = total / 60;
    int nm = total % 60;
    cout << "Nueva hora: " << setw(2) << setfill('0') << nh << ":" << setw(2) << setfill('0') << nm << endl;
    return 0;
}
