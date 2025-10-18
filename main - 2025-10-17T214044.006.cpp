#include <iostream>
using namespace std;

int main() {
    string juego;
    int calificacion;
    cout << "Ingrese su videojuego favorito: ";
    cin >> juego;
    cout << "Califique el juego del 1 al 10: ";
    cin >> calificacion;

    cout << "Su juego " << juego << " tiene calificacion: " << calificacion << endl;
    return 0;
}
