#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int opcion, valor;

    do {
        cout << "1. Encolar\n2. Desencolar\n3. Mostrar frente\n4. Salir\nOpción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Valor a encolar: ";
                cin >> valor;
                q.push(valor);
                break;
            case 2:
                if (!q.empty()) {
                    cout << "Elemento desencolado: " << q.front() << endl;
                    q.pop();
                } else {
                    cout << "Cola vacía\n";
                }
                break;
            case 3:
                if (!q.empty()) cout << "Frente: " << q.front() << endl;
                else cout << "Cola vacía\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}
