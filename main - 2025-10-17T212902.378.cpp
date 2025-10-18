#include <iostream>
using namespace std;

int main() {
    int dias, semanas, resto;
    cout << "Ingrese cantidad de dias: ";
    cin >> dias;
    
    semanas = dias / 7;
    resto = dias % 7;
    
    cout << dias << " dias son " << semanas << " semanas y " << resto << " dias." << endl;
    return 0;
}
