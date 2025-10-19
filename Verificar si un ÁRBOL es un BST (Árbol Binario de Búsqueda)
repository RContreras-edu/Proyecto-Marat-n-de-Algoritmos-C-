#include <iostream>
#include <limits>
using namespace std;

struct Nodo {
    int dato;
    Nodo* izq;
    Nodo* der;
};

Nodo* nuevoNodo(int val) {
    return new Nodo{val, nullptr, nullptr};
}

bool esBSTUtil(Nodo* nodo, int minVal, int maxVal) {
    if (!nodo) return true;
    if (nodo->dato <= minVal || nodo->dato >= maxVal) return false;
    return esBSTUtil(nodo->izq, minVal, nodo->dato) &&
           esBSTUtil(nodo->der, nodo->dato, maxVal);
}

bool esBST(Nodo* raiz) {
    return esBSTUtil(raiz, numeric_limits<int>::min(), numeric_limits<int>::max());
}

int main() {
    Nodo* root = nuevoNodo(2);
    root->izq = nuevoNodo(1);
    root->der = nuevoNodo(3);

    cout << (esBST(root) ? "Es BST" : "No es BST") << endl;

    root->der->izq = nuevoNodo(0);  // rompe la propiedad

    cout << (esBST(root) ? "Es BST" : "No es BST") << endl;

    return 0;
}

