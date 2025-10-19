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

int contarNodos(Nodo* raiz) {
    if (!raiz) return 0;
    return 1 + contarNodos(raiz->izq) + contarNodos(raiz->der);
}

int main() {
    Nodo* raiz = nuevoNodo(10);
    raiz->izq = nuevoNodo(20);
    raiz->der = nuevoNodo(30);
    raiz->der->izq = nuevoNodo(40);

    cout << "Cantidad de nodos: " << contarNodos(raiz) << endl;
    return 0;
}
