#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string mensaje;
    cout << "Ingrese mensaje: ";
    getline(cin, mensaje);

    cout << "Hexadecimal invertido: ";
    for(int i = mensaje.length()-1; i >= 0; i--){
        cout << hex << setw(2) << setfill('0') << (int)mensaje[i] << " ";
    }
    cout << endl;
    return 0;
}
