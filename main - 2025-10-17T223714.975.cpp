#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* izq;
    Nodo* der;
};

Nodo* nuevoNodo(int val) {
    return new Nodo{val, nullptr, nullptr};
}

bool tieneCamino(Nodo* root, int sum) {
    if (!root) return false;
    sum -= root->dato;
    if (!root->izq && !root->der)  // hoja
        return sum == 0;
    return tieneCamino(root->izq, sum) || tieneCamino(root->der, sum);
}

int main() {
    Nodo* root = nuevoNodo(5);
    root->izq = nuevoNodo(4);
    root->der = nuevoNodo(8);
    root->izq->izq = nuevoNodo(11);
    root->der->izq = nuevoNodo(13);
    root->der->der = nuevoNodo(4);
    root->der->der->der = nuevoNodo(1);

    int sum = 22;
    cout << (tieneCamino(root, sum) ? "Sí hay camino\n" : "No hay camino\n");
    return 0;
}

