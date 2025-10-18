#include <iostream>
#include <stack>
using namespace std;

class ColaConPilas {
private:
    stack<int> s1, s2;

public:
    void enqueue(int x) {
        s1.push(x);
    }

    int dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        if (s2.empty()) {
            cout << "Cola vacía\n";
            return -1;
        }

        int frente = s2.top();
        s2.pop();
        return frente;
    }
};

int main() {
    ColaConPilas cola;
    cola.enqueue(1);
    cola.enqueue(2);
    cola.enqueue(3);
    cout << "Dequeue: " << cola.dequeue() << endl;
    cout << "Dequeue: " << cola.dequeue() << endl;
    return 0;
}
