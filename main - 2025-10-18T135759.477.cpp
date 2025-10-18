#include <iostream>
using namespace std;

const int MAX = 100;
int pila[MAX];
int tope = -1;

void push(int val) {
    if (tope == MAX - 1) {
        cout << "Pila llena\n";
        return;
    }
    pila[++tope] = val;
}

void pop() {
    if (tope == -1) {
        cout << "Pila vacía\n";
        return;
    }
    cout << "Elemento eliminado: " << pila[tope--] << endl;
}

void mostrar() {
    if (tope == -1) {
        cout << "Pila vacía\n";
        return;
    }
    cout << "Elementos en pila: ";
    for (int i = tope; i >= 0; --i)
        cout << pila[i] << " ";
    cout << endl;
}

int main() {
    int opcion, valor;
    do {
        cout << "1.Push 2.Pop 3.Mostrar 4.Salir\nElija opción: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                cout << "Ingrese valor a insertar: ";
                cin >> valor;
                push(valor);
                break;
            case 2:
                pop();
                break;
            case 3:
                mostrar();
                break;
            case 4:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida\n";
        }
    } while(opcion != 4);

    return 0;
}
