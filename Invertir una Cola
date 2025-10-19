#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> cola;
    stack<int> pila;

    cola.push(1);
    cola.push(2);
    cola.push(3);
    cola.push(4);

    while (!cola.empty()) {
        pila.push(cola.front());
        cola.pop();
    }

    while (!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }

    cout << "Cola invertida: ";
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;

    return 0;
}
