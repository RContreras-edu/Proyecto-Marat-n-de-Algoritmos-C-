#include <iostream>
using namespace std;

int main() {
    int N, num, contador=0;
    double suma=0;
    cout << "Cantidad de numeros: ";
    cin >> N;

    for(int i=0;i<N;i++){
        cout << "Ingrese un numero: ";
        cin >> num;
        if(num<0){
            suma += num;
            contador++;
        }
    }

    if(contador>0){
        cout << "Promedio de numeros negativos: " << suma/contador << endl;
    } else {
        cout << "No se ingresaron numeros negativos" << endl;
    }
    return 0;
}
