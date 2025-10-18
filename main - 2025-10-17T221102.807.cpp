#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void insertarFinal(Nodo*& cabeza, int valor) {
    Nodo* nuevo = new Nodo{valor, nullptr};
    if (!cabeza) {
        cabeza = nuevo;
    } else {
        Nodo* temp = cabeza;
        while (temp->siguiente) temp = temp->siguiente;
        temp->siguiente = nuevo;
    }
}

void mostrarLista(Nodo* cabeza) {
    cout << "Lista: ";
    while (cabeza) {
        cout << cabeza->dato << " ";
        cabeza = cabeza->siguiente;
    }
    cout << endl;
}

int main() {
    Nodo* lista = nullptr;
    int n, valor;
    cout << "Cantidad de elementos: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Elemento " << i+1 << ": ";
        cin >> valor;
        insertarFinal(lista, valor);
    }

    mostrarLista(lista);
    return 0;
}

