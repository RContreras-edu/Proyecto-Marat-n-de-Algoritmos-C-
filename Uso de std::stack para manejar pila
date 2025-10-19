#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int opcion, valor;

    do {
        cout << "1. Push\n2. Pop\n3. Mostrar cima\n4. Salir\nOpción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Valor a insertar: ";
                cin >> valor;
                s.push(valor);
                break;
            case 2:
                if (!s.empty()) {
                    cout << "Elemento eliminado: " << s.top() << endl;
                    s.pop();
                } else {
                    cout << "Pila vacía\n";
                }
                break;
            case 3:
                if (!s.empty()) cout << "Cima: " << s.top() << endl;
                else cout << "Pila vacía\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}
