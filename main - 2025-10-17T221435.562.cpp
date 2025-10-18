#include <iostream>
using namespace std;

class Pila {
private:
    int* datos;
    int tope;
    int capacidad;

public:
    Pila(int cap = 100) {
        capacidad = cap;
        datos = new int[capacidad];
        tope = -1;
    }

    void push(int valor) {
        if (tope < capacidad - 1) {
            datos[++tope] = valor;
        } else {
            cout << "Pila llena\n";
        }
    }

    void pop() {
        if (tope >= 0) {
            --tope;
        } else {
            cout << "Pila vacía\n";
        }
    }

    int top() {
        if (tope >= 0) return datos[tope];
        else {
            cout << "Pila vacía\n";
            return -1;
        }
    }

    bool vacia() {
        return tope == -1;
    }
};

int main() {
    Pila pila;
    pila.push(10);
    pila.push(20);
    cout << "Tope: " << pila.top() << endl;
    pila.pop();
    cout << "Tope: " << pila.top() << endl;
    return 0;
}


