#include <iostream>
using namespace std;

int main() {
    float temp[7], suma=0, promedio;
    
    for(int i=0; i<7; i++){
        cout << "Ingrese temperatura del dia " << i+1 << ": ";
        cin >> temp[i];
        suma += temp[i];
    }
    
    promedio = suma / 7;
    cout << "El promedio de temperatura es: " << promedio << endl;
    return 0;
}
