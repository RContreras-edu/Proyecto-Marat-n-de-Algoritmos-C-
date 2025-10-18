#include <iostream>
using namespace std;
#define MAX 100

int stack[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1)
        cout << "Stack overflow\n";
    else
        stack[++top] = x;
}

void pop() {
    if (top == -1)
        cout << "Stack underflow\n";
    else
        cout << "Elemento eliminado: " << stack[top--] << endl;
}

void mostrar() {
    if (top == -1)
        cout << "Pila vacía\n";
    else {
        cout << "Pila actual: ";
        for (int i = 0; i <= top; i++)
            cout << stack[i] << " ";
        cout << endl;
    }
}

int main() {
    int opcion, val;
    do {
        cout << "1. Push\n2. Pop\n3. Mostrar\n0. Salir\nOpción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Valor a insertar: ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                mostrar();
                break;
        }
    } while (opcion != 0);
    return 0;
}
