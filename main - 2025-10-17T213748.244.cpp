#include <iostream>
using namespace std;

int main() {
    string marca;
    cout << "Ingrese la marca del carro: ";
    cin >> marca;

    for(char &c : marca){
        if(c >= 'a' && c <= 'z') c = c - 32;
    }

    cout << "Marca en mayusculas: " << marca << endl;
    return 0;
}
