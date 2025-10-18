#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantos videojuegos desea ingresar? ";
    cin >> n;

    string juegos[n];
    for(int i = 0; i < n; i++){
        cout << "Nombre del juego " << i+1 << ": ";
        cin >> juegos[i];
    }

    cout << "Juegos en orden inverso: ";
    for(int i = n-1; i >= 0; i--){
        cout << juegos[i] << " ";
    }
    cout << endl;
    return 0;
}
