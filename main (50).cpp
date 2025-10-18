#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantas notas desea ingresar? ";
    cin >> n;

    float nota, suma = 0, mayor = 0;
    for (int i = 1; i <= n; i++) {
        cout << "Nota " << i << ": ";
        cin >> nota;
        suma += nota;
        if (nota > mayor) mayor = nota;
    }

    cout << "Promedio general: " << suma / n << endl;
    cout << "Nota mas alta: " << mayor << endl;
    return 0;
}
