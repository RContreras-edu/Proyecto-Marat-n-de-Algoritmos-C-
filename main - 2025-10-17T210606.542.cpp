#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    cout << "Numeros impares hasta " << N << ": ";
    for(int i=1; i<=N; i++)
        if(i%2!=0) cout << i << " ";
    cout << endl;
    return 0;
}
