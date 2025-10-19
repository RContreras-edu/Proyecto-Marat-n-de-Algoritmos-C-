#include <iostream>
#include <iomanip> // Para std::hex y std::setw
using namespace std;

int main() {
    string mensaje;
    
    cout << "Ingrese un mensaje: ";
    getline(cin, mensaje); // Permite espacios
    
    cout << "Mensaje en hexadecimal: ";
    for(char c : mensaje){
        cout << hex << setw(2) << setfill('0') << (int)c << " ";
    }
    cout << endl;
    
    return 0;
}
