#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    char letra;
    cout << "Cuantos juegos desea ingresar? ";
    cin >> n;
    cout << "Ingrese la letra a buscar: ";
    cin >> letra;

    string juego;
    for(int i = 0; i < n; i++){
        cout << "Nombre del juego " << i+1 << ": ";
        cin >> juego;
        if(juego[0] == letra) contador++;
    }

    cout << "Cantidad de juegos que empiezan con " << letra << ": " << contador << endl;
    return 0;
}
