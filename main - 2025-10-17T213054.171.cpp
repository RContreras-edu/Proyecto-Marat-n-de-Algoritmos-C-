#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string hex1, hex2;
    int num1, num2;

    cout << "Ingrese el primer numero hexadecimal: ";
    cin >> hex1;
    cout << "Ingrese el segundo numero hexadecimal: ";
    cin >> hex2;

    stringstream ss1, ss2;
    ss1 << hex << hex1; ss1 >> num1;
    ss2 << hex << hex2; ss2 >> num2;

    int suma = num1 + num2;
    cout << "La suma en hexadecimal es: " << hex << suma << endl;

    return 0;
}
