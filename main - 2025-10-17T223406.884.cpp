#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* izq;
    Nodo* der;
};

Nodo* nuevoNodo(int valor) {
    return new Nodo{valor, nullptr, nullptr};
}

int altura(Nodo* raiz) {
    if (!raiz) return 0;
    return 1 + max(altura(raiz->izq), altura(raiz->der));
}

int main() {
    Nodo* raiz = nuevoNodo(1);
    raiz->izq = nuevoNodo(2);
    raiz->der = nuevoNodo(3);
    raiz->izq->izq = nuevoNodo(4);

    cout << "Altura del árbol: " << altura(raiz) << endl;
    return 0;
}

