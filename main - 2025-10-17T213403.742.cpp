#include <iostream>
using namespace std;

int main() {
    string animal;
    int contador = 0;

    cout << "Ingrese nombres de animales (escriba 'fin' para terminar): " << endl;
    while(true){
        cin >> animal;
        if(animal == "fin") break;
        contador++;
    }

    cout << "Cantidad de animales ingresados: " << contador << endl;

    return 0;
}
