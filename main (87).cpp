#include <iostream>
using namespace std;

int main() {
    int N, num, contador = 0;
    cout << "Cantidad de numeros: ";
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        if(num > 10){
            contador++;
        }
    }
    cout << "Numeros mayores a 10: " << contador << endl;
    return 0;
}
