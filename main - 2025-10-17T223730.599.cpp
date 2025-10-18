#include <iostream>
#include <queue>
using namespace std;

struct Nodo {
    int dato;
    Nodo* izq;
    Nodo* der;
};

Nodo* nuevoNodo(int val) {
    return new Nodo{val, nullptr, nullptr};
}

void recorrerPorNivel(Nodo* root) {
    if (!root) return;
    queue<Nodo*> q;
    q.push(root);

    while (!q.empty()) {
        int tam = q.size();
        for (int i = 0; i < tam; ++i) {
            Nodo* nodo = q.front();
            q.pop();
            cout << nodo->dato << " ";
            if (nodo->izq) q.push(nodo->izq);
            if (nodo->der) q.push(nodo->der);
        }
        cout << endl;
    }
}

int main() {
    Nodo* root = nuevoNodo(1);
    root->izq = nuevoNodo(2);
    root->der = nuevoNodo(3);
    root->izq->izq = nuevoNodo(4);
    root->izq->der = nuevoNodo(5);

    cout << "Recorrido por niveles:\n";
    recorrerPorNivel(root);
    return 0;
}

