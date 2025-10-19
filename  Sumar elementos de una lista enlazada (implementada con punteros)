using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo* cabeza = nullptr;
    int n, valor;

    cout << "Cuántos elementos quiere ingresar? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese valor #" << i+1 << ": ";
        cin >> valor;
        Nodo* nuevo = new Nodo{valor, nullptr};

        if (!cabeza) {
            cabeza = nuevo;
        } else {
            Nodo* temp = cabeza;
            while (temp->siguiente) temp = temp->siguiente;
            temp->siguiente = nuevo;
        }
    }

    int suma = 0;
    Nodo* temp = cabeza;
    while (temp) {
        suma += temp->dato;
        temp = temp->siguiente;
    }

    cout << "La suma de los elementos es: " << suma << endl;

    // Liberar memoria
    temp = cabeza;
    while (temp) {
        Nodo* siguiente = temp->siguiente;
        delete temp;
        temp = siguiente;
    }

    return 0;
}
