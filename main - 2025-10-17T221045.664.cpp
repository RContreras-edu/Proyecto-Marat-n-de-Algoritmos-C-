#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int opcion, valor;

    do {
        cout << "1. Encolar\n2. Desencolar\n3. Salir\nOpción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Valor a encolar: ";
                cin >> valor;
                q.push(valor);
                break;
            case 2:
                if (!q.empty()) q.pop();
                else cout << "Cola vacía.\n";
                break;
        }
    } while (opcion != 3);

    cout << "Elementos restantes en la cola: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
