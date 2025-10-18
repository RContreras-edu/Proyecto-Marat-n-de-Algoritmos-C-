#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    cout << "Numeros pares hasta " << N << ": ";
    for(int i=2;i<=N;i+=2) cout << i << " ";
    cout << endl;
    return 0;
}
