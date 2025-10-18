#include <iostream>
using namespace std;

int main() {
    int dias, semanas, dias_restantes;
    cout << "Ingrese el número de días: ";
    cin >> dias;
    
    semanas = dias / 7;
    dias_restantes = dias % 7;
    
    cout << dias << " días son " << semanas << " semanas y " 
         << dias_restantes << " días." << endl;
    return 0;
}
