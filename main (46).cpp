#include <iostream>
using namespace std;

int main(){
    int a, b, x, y, mcd;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    x = a; y = b;
    while(y != 0){
        int r = x % y;
        x = y;
        y = r;
    }
    mcd = x;
    cout << "MCD: " << mcd << "\nMCM: " << (a*b)/mcd << endl;
    return 0;
}
