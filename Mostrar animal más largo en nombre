#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantos animales desea ingresar? ";
    cin >> n;

    string animal, masLargo = "";
    for(int i = 0; i < n; i++){
        cout << "Nombre del animal " << i+1 << ": ";
        cin >> animal;
        if(animal.length() > masLargo.length()) masLargo = animal;
    }

    cout << "Animal con nombre mas largo: " << masLargo << endl;

    return 0;
}
