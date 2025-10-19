#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void insertar(Nodo*& cabeza, int valor) {
    Nodo* nuevo = new Nodo{valor, cabeza};
    cabeza = nuevo;
}

bool buscar(Nodo* cabeza, int x) {
    while (cabeza) {
        if (cabeza->dato == x) return true;
        cabeza = cabeza->siguiente;
    }
    return false;
}

int main() {
    Nodo* lista = nullptr;
    insertar(lista, 30);
    insertar(lista, 20);
    insertar(lista, 10);

    int x = 20;
    if (buscar(lista, x))
        cout << "Encontrado" << endl;
    else
        cout << "No encontrado" << endl;

    return 0;
}



