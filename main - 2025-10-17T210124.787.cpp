#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;

    int original=n, invertido=0;
    while(n>0){
        invertido = invertido*10 + n%10;
        n/=10;
    }

    if(invertido==original) cout << original << " es capicua.\n";
    else cout << original << " no es capicua.\n";
    return 0;
}
