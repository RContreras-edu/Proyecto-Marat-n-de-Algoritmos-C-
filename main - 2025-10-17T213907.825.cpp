#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    char letra;
    cout << "Cuantos carros desea ingresar? ";
    cin >> n;
    cout << "Ingrese la letra a buscar: ";
    cin >> letra;

    string carro;
    for(int i = 0; i < n; i++){
        cout << "Nombre del carro " << i+1 << ": ";
        cin >> carro;
        if(carro[0] == letra) contador++;
    }

    cout << "Cantidad de carros que empiezan con " << letra << ": " << contador << endl;

    return 0;
}
