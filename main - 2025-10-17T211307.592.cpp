#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> q;
    int op;
    do {
        cout << "\nMenu cola: 1=enqueue,2=dequeue,3=peek,4=size,0=salir: ";
        cin >> op;
        if (op == 1) {
            int x; cout << "Valor a encolar: "; cin >> x;
            q.push_back(x);
        } else if (op == 2) {
            if (q.empty()) cout << "Cola vacia.\n";
            else { cout << "Dequeued: " << q.front() << endl; q.erase(q.begin()); }
        } else if (op == 3) {
            if (q.empty()) cout << "Cola vacia.\n";
            else cout << "Frente: " << q.front() << endl;
        } else if (op == 4) cout << "Tamanio: " << q.size() << endl;
    } while (op != 0);
    return 0;
}
