#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Ingrese entero entre 1 y 3999: ";
    cin >> num;
    if (num < 1 || num > 3999) {
        cout << "Fuera de rango.\n";
        return 0;
    }

    int vals[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string syms[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string res;
    for (int i = 0; i < 13; ++i) {
        while (num >= vals[i]) {
            res += syms[i];
            num -= vals[i];
        }
    }
    cout << "Romano: " << res << endl;
    return 0;
}
