#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cout << "Cuántos números ingresará? ";
    cin >> N;

    int numeros[N];
    for(int i = 0; i < N; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> numeros[i];
    }

    sort(numeros, numeros + N);

    double mediana;
    if (N % 2 == 0) {
        mediana = (numeros[N/2 - 1] + numeros[N/2]) / 2.0;
    } else {
        mediana = numeros[N/2];
    }

    cout << "La mediana es: " << mediana << endl;
    return 0;
}
