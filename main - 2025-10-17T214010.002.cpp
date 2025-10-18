#include <iostream>
using namespace std;

int main() {
    string genero;
    cout << "Ingrese el genero del videojuego: ";
    cin >> genero;

    if(genero == "Accion")
        cout << "Es un juego de accion." << endl;
    else if(genero == "Aventura")
        cout << "Es un juego de aventura." << endl;
    else if(genero == "Deportes")
        cout << "Es un juego de deportes." << endl;
    else
        cout << "Genero no reconocido." << endl;

    return 0;
}
