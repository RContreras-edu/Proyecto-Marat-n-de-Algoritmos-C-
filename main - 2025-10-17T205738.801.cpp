#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> st;
    int opc;
    do {
        cout << "\nMenu: 1=push,2=pop,3=top,4=size,0=salir: ";
        cin >> opc;
        if (opc == 1) {
            int x; cout << "Valor a push: "; cin >> x;
            st.push_back(x);
        } else if (opc == 2) {
            if (st.empty()) cout << "Pila vacia.\n";
            else { cout << "Pop: " << st.back() << endl; st.pop_back(); }
        } else if (opc == 3) {
            if (st.empty()) cout << "Pila vacia.\n";
            else cout << "Top: " << st.back() << endl;
        } else if (opc == 4) cout << "Tamanio: " << st.size() << endl;
    } while (opc != 0);
    return 0;
}
