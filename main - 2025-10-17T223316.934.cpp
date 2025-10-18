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

void mostrar(Nodo* cabeza) {
    while (cabeza) {
        cout << cabeza->dato << " ";
        cabeza = cabeza->siguiente;
    }
    cout << endl

;
 }
void invertir(Nodo*& cabeza) {
 Nodo* prev = nullptr;
 Nodo* actual = cabeza;
 Nodo* sig = nullptr;
while (actual) {
    sig = actual->siguiente;
    actual->siguiente = prev;
    prev = actual;
    actual = sig;
}
cabeza = prev;

}
int main() {
 Nodo* lista = nullptr;
 insertar(lista, 30);
 insertar(lista, 20);
 insertar(lista, 10);
cout << "Original: ";
mostrar(lista);

invertir(lista);

cout << "Invertida: ";
mostrar(lista);

return 0;

}


