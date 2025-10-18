#include <iostream>
using namespace std;

int main() {
    string animal, respuesta;
    cout << "Ingrese el nombre del animal: ";
    cin >> animal;
    cout << "Es mamifero? (si/no): ";
    cin >> respuesta;

    if(respuesta == "si")
        cout << animal << " es un mamifero." << endl;
    else
        cout << animal << " no es un mamifero." << endl;

    return 0;
}
