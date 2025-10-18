#include <iostream>
using namespace std;

int main() {
    int N, num, contador = 0;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        if(num % 2 == 0){
            contador++;
        }
    }
    cout << "Cantidad de numeros pares: " << contador << endl;
    return 0;
}
