#include <iostream>
using namespace std;

int main() {
    int num, positivos = 0, negativos = 0, ceros = 0;
    
    for(int i = 1; i <= 10; i++) {
        cout << "Ingrese un número: ";
        cin >> num;
        if(num > 0) positivos++;
        else if(num < 0) negativos++;
        else ceros++;
    }
    
    cout << "Positivos: " << positivos << ", Negativos: " << negativos 
         << ", Ceros: " << ceros << endl;
    return 0;
}

