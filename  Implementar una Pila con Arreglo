#include <iostream>
#define TAM 5
using namespace std;

class Pila {
    int arr[TAM];
    int top;
public:
    Pila() { top = -1; }

    void push(int x) {
        if (top == TAM - 1) {
            cout << "Pila llena\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Pila vacía\n";
            return;
        }
        cout << "Elemento eliminado: " << arr[top--] << endl;
    }

    void mostrar() {
        if (top == -1) {
            cout << "Pila vacía\n";
            return;
        }
        cout << "Elementos de la pila: ";
        for (int i = top; i >= 0; --i)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Pila pila;
    pila.push(10);
    pila.push(20);
    pila.mostrar();
    pila.pop();
    pila.mostrar();
    return 0;
}
