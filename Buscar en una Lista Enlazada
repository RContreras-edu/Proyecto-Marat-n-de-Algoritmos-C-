#include <iostream>
using namespace std;


struct Nodo {
    int dato;
    Nodo* sig;
};


int main() {
    Nodo* cabeza = nullptr;
    Nodo* actual = nullptr;


    for (int i = 1; i <= 5; ++i) {
        Nodo* nuevo = new Nodo{i, nullptr};
        if (!cabeza) cabeza = nuevo;
        else actual->sig = nuevo;
        actual = nuevo;
    }


    int valor;
    cout << "Buscar valor: ";
    cin >> valor;


    actual = cabeza;
    bool encontrado = false;
    while (actual) {
        if (actual->dato == valor) {
            encontrado = true;
            break;
        }
        actual = actual->sig;
    }


    if (encontrado)
        cout << "Valor encontrado en la lista.\n";
    else
        cout << "Valor no encontrado.\n";


    return 0;
}

