#include <iostream>
using namespace std;


struct Nodo {
    int dato;
    Nodo* sig;
};


void mostrar(Nodo* cabeza) {
    while (cabeza) {
        cout << cabeza->dato << " ";
        cabeza = cabeza->sig;
    }
    cout << endl;
}


int main() {
    Nodo* cabeza = nullptr;


    for (int i = 5; i >= 1; --i) {
        Nodo* nuevo = new Nodo{i, cabeza};
        cabeza = nuevo;
    }


    mostrar(cabeza);
    return 0;
}

