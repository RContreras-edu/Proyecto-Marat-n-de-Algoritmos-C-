#include <iostream>
using namespace std;


int main() {
    string s;
    cout << "Ingrese un número: ";
    cin >> s;


    int num = 0;
    for (char c : s) {
        if (c >= '0' && c <= '9')
            num = num * 10 + (c - '0');
        else {
            cout << "Entrada inválida.\n";
            return 1;
        }
    }


    cout << "Número convertido: " << num << endl;
    return 0;
}

