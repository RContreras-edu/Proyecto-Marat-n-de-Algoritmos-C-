#include <iostream>
using namespace std;

int main() {
    string animal;
    cout << "Ingrese el nombre del animal: ";
    cin >> animal;

    for(char &c : animal){
        if(c >= 'a' && c <= 'z') c = c - 32;
    }

    cout << "Nombre en mayusculas: " << animal << endl;
    return 0;
}

