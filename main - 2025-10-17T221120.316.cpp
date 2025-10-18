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

Nodo* sumarListas(Nodo* l1, Nodo* l2) {
    Nodo* resultado = nullptr;
    Nodo** ult = &resultado;
    int acarreo = 0;

    while (l1 || l2 || acarreo) {
        int suma = acarreo;
        if (l1) { suma += l1->dato; l1 = l1->siguiente; }
        if (l2) { suma += l2->dato; l2 = l2->siguiente; }

        acarreo = suma / 10;
        *ult = new Nodo{suma % 10, nullptr};
        ult = &((*ult)->siguiente);
    }
    return resultado;
}

void mostrar(Nodo* cabeza) {
    while (cabeza) {
        cout << cabeza->dato << " ";
        cabeza = cabeza->siguiente;
    }
    cout << endl;
}

int main() {
    Nodo *l1 = nullptr, *l2 = nullptr;
    insertar(l1, 3); insertar(l1, 4); insertar(l1, 2); // 243
    insertar(l2, 4); insertar(l2, 6); insertar(l2, 5); // 564

    Nodo* resultado = sumarListas(l1, l2); // 807 → 7 0 8
    cout << "Resultado: ";
    mostrar(resultado);

    return 0;
}


