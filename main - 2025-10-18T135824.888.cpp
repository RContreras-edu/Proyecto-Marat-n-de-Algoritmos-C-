#include <iostream>
using namespace std;

const int MAX = 100;
int cola[MAX];
int frente = 0, final = -1, size = 0;

void enqueue(int val) {
    if (size == MAX) {
        cout << "Cola llena\n";
        return;
    }
    final = (final + 1) % MAX;
    cola[final] = val;
    size++;
}

void dequeue() {
    if (size == 0) {
        cout << "Cola vacía\n";
        return;
    }
    cout << "Elemento eliminado: " << cola[frente] << endl;
    frente = (frente + 1) % MAX;
    size--;
}

void mostrar() {
    if (size == 0) {
        cout << "Cola vacía\n";
        return;
    }
    cout << "Elementos en cola: ";
    for (int i = 0; i < size; ++i) {
        int idx = (frente + i) % MAX;
        cout << cola[idx] << " ";
    }
    cout << endl;
}

int main() {
    int opcion, valor;
    do {
        cout << "1.Enqueue 2.Dequeue 3.Mostrar 4.Salir\nElija opción: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                cout << "Ingrese valor a insertar: ";
                cin >> valor;
                enqueue(valor);
                break;
            case 2:
                dequeue();
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
