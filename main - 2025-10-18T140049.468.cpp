#include <iostream>
#include <string>
using namespace std;

int main() {
    string num1, num2;
    cout << "Ingrese primer número: ";
    cin >> num1;
    cout << "Ingrese segundo número: ";
    cin >> num2;

    string resultado = "";
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int acarreo = 0;

    while (i >= 0 || j >= 0 || acarreo) {
        int dig1 = (i >= 0) ? num1[i] - '0' : 0;
        int dig2 = (j >= 0) ? num2[j] - '0' : 0;

        int suma = dig1 + dig2 + acarreo;
        resultado = char((suma % 10) + '0') + resultado;
        acarreo = suma / 10;

        i--;
        j--;
    }

    cout << "Suma: " << resultado << endl;
    return 0;
}

