#include <iostream>
using namespace std;

class Cola {
private:
    int* datos;
    int inicio, fin, capacidad, tam;

public:
    Cola(int cap = 100) {
        capacidad = cap;
        datos = new int[capacidad];
        inicio = fin = tam = 0;
    }

    void enqueue(int valor) {
        if (tam < capacidad) {
            datos[fin] = valor;
            fin = (fin + 1) % capacidad;
            ++tam;
        } else {
            cout << "Cola llena\n";
        }
    }

    void dequeue() {
        if (tam > 0) {
            inicio = (inicio + 1) % capacidad;
            --tam;
        } else {
            cout << "Cola vacía\n";
        }
    }

    int front() {
        if (tam > 0) return datos[inicio];
        else {
            cout << "Cola vacía\n";
            return -1;
        }
    }

    bool vacia() {
        return tam == 0;
    }
};

int main() {
    Cola cola;
    cola.enqueue(5);
    cola.enqueue(10);
    cout << "Frente: " << cola.front() << endl;
    cola.dequeue();
    cout << "Frente: " << cola.front() << endl;
    return 0;
}



