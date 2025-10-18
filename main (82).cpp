#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    int numeros[N];
    for(int i = 0; i < N; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];

    for(int i = 1; i < N; i++) {
        if(numeros[i] > mayor) mayor = numeros[i];
        if(numeros[i] < menor) menor = numeros[i];
    }

    int diferencia = mayor - menor;
    cout << "La diferencia entre el mayor y el menor es: " << diferencia << endl;

    return 0;
}
