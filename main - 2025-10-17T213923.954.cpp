#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantos carros desea ingresar? ";
    cin >> n;

    string carro, masLargo = "";
    for(int i = 0; i < n; i++){
        cout << "Nombre del carro " << i+1 << ": ";
        cin >> carro;
        if(carro.length() > masLargo.length()) masLargo = carro;
    }

    cout << "Carro con nombre mas largo: " << masLargo << endl;

    return 0;
}
