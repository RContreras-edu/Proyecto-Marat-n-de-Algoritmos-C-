#include <iostream>
#include <vector>
#include <list>
using namespace std;

class TablaHash {
private:
    static const int TAM = 10;
    vector<list<int>> tabla;

public:
    TablaHash() : tabla(TAM) {}

    void insertar(int valor) {
        int pos = valor % TAM;
        tabla[pos].push_back(valor);
    }

    bool buscar(int valor) {
        int pos = valor % TAM;
        for (int x : tabla[pos]) {
            if (x == valor) return true;
        }
        return false;
    }

    void mostrar() {
        for (int i = 0; i < TAM; ++i) {
            cout << i << ": ";
            for (int x : tabla[i]) cout << x << " ";
            cout << endl;
        }
    }
};

int main() {
    TablaHash t;
    t.insertar(15);
    t.insertar(25);
    t.insertar(35);

    t.mostrar();

    int x = 25;
    cout << (t.buscar(x) ? "Encontrado" : "No encontrado") << endl;
    return 0;
}



