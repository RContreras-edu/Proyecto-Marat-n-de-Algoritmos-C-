#include <iostream>
using namespace std;

int main() {
    int n, jugadores;
    cout << "Cuantos videojuegos desea ingresar? ";
    cin >> n;

    string juego, masJugado;
    int maxJugadores = 0;

    for(int i = 0; i < n; i++){
        cout << "Nombre del juego: ";
        cin >> juego;
        cout << "Numero de jugadores: ";
        cin >> jugadores;

        if(jugadores > maxJugadores){
            maxJugadores = jugadores;
            masJugado = juego;
        }
    }

    cout << "El juego mas jugado es: " << masJugado << " con " << maxJugadores << " jugadores." << endl;
    return 0;
}
