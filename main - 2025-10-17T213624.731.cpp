#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    char letra;
    cout << "Cuantos animales desea ingresar? ";
    cin >> n;
    cout << "Ingrese la letra a buscar: ";
    cin >> letra;

    string animal;
    for(int i = 0; i < n; i++){
        cout << "Nombre del animal " << i+1 << ": ";
        cin >> animal;
        if(animal[0] == letra) contador++;
    }

    cout << "Cantidad de animales que empiezan con " << letra << ": " << contador << endl;

    return 0;
}
