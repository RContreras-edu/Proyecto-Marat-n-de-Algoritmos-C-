#include <iostream>
using namespace std;

int main() {
    int n, pares=0, impares=0;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cout << "Numero " << i+1 << ": ";
        cin >> v[i];
        if(v[i]%2==0) pares++;
        else impares++;
    }
    cout << "Pares: " << pares << ", Impares: " << impares << endl;
    return 0;
}
