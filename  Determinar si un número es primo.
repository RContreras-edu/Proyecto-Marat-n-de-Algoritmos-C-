#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;

    bool esPrimo=true;
    if(n<2) esPrimo=false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0){ esPrimo=false; break; }

    if(esPrimo) cout << n << " es primo.\n";
    else cout << n << " no es primo.\n";

    return 0;
}
