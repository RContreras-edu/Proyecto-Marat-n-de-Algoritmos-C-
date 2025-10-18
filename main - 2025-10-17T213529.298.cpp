#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "Elija su animal favorito: \n1. Perro\n2. Gato\n3. Loro\n4. Elefante\n";
    cin >> opcion;

    switch(opcion){
        case 1: cout << "Su animal favorito es Perro." << endl; break;
        case 2: cout << "Su animal favorito es Gato." << endl; break;
        case 3: cout << "Su animal favorito es Loro." << endl; break;
        case 4: cout << "Su animal favorito es Elefante." << endl; break;
        default: cout << "Opcion no valida." << endl;
    }

    return 0;
}
