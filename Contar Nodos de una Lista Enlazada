#include <iostream>
using namespace std;


struct Nodo {
    int dato;
    Nodo* sig;
};


int main() {
    Nodo* cabeza = nullptr;
    Nodo* actual = nullptr;


    for (int i = 0; i < 5; ++i) {
        Nodo* nuevo = new Nodo{i + 1, nullptr};
        if (!cabeza)
            cabeza = nuevo;
        else
            actual->sig = nuevo;
        actual = nuevo;
    }


    int contador = 0;
    actual = cabeza;
    while (actual) {
        contador++;
        actual = actual->sig;
    }


    cout << "Total de nodos: " << contador << endl;
    return 0;
}
