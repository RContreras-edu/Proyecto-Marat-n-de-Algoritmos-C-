#include <iostream>
using namespace std;

int main() {
    string juego;
    int contador = 0;

    cout << "Ingrese nombres de videojuegos (escriba 'fin' para terminar): " << endl;
    while(true){
        cin >> juego;
        if(juego == "fin") break;
        contador++;
    }

    cout << "Cantidad de videojuegos ingresados: " << contador << endl;
    return 0;
}
