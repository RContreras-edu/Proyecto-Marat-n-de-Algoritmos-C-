#include <iostream>
#include <queue>
using namespace std;

class PilaConColas {
    queue<int> q1, q2;
public:
    void push(int x) {
        q1.push(x);
    }

    void pop() {
        if (q1.empty()) return;
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        cout << "Elemento extraído: " << q1.front() << endl;
        q1.pop();
        swap(q1, q2);
    }
};

int main() {
    PilaConColas pila;
    pila.push(10);
    pila.push(20);
    pila.push(30);
    pila.pop(); // debería mostrar 30
    pila.pop(); // debería mostrar 20

    return 0;
}
