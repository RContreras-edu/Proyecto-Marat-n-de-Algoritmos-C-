#include <iostream>
#define TAM 5
using namespace std;

class ColaCircular {
    int arr[TAM], frente = -1, final = -1;
public:
    void enqueue(int x) {
        if ((final + 1) % TAM == frente) {
            cout << "Cola llena.\n";
            return;
        }
        if (frente == -1) frente = 0;
        final = (final + 1) % TAM;
        arr[final] = x;
    }

    void dequeue() {
        if (frente == -1) {
            cout << "Cola vacía.\n";
            return;
        }
        if (frente == final)
            frente = final = -1;
        else
            frente = (frente + 1) % TAM;
    }

    void mostrar() {
        if (frente == -1) {
            cout << "Cola vacía.\n";
            return;
        }
        int i = frente;
        cout << "Cola: ";
        while (true) {
            cout << arr[i] << " ";
            if (i == final) break;
            i = (i + 1) % TAM;
        }
        cout << endl;
    }
};

int main() {
    ColaCircular cola;
    cola.enqueue(10);
    cola.enqueue(20);
    cola.enqueue(30);
    cola.mostrar();
    cola.dequeue();
    cola.mostrar();
    return 0;
}

