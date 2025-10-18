#include <iostream>
using namespace std;

int main(){
    int n, invertido=0, original;
    cout << "Ingrese un numero: ";
    cin >> n;
    original = n;
    while(n>0){
        invertido = invertido*10 + (n%10);
        n /= 10;
    }
    if(invertido == original) cout << "Es capicua";
    else cout << "No es capicua";
    return 0;
}
