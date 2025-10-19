#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    priority_queue<pair<int, string>> fila;

    fila.push({3, "Ana"});
    fila.push({5, "Luis"});
    fila.push({1, "Carlos"});

    cout << "Orden de atención:\n";
    while (!fila.empty()) {
        cout << fila.top().second << " (prioridad " << fila.top().first << ")\n";
        fila.pop();
    }

    return 0;
}
