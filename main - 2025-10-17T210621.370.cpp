#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    int count=0, tmp=n;
    while(tmp>0){
        tmp /= 10;
        count++;
    }

    cout << "El numero " << n << " tiene " << count << " digitos.\n";
    return 0;
}
