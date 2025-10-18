#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    for(int i=1; i<=50; i++)
        suma += i;
    cout << "La suma de los primeros 50 numeros naturales es: " << suma;
    return 0;
}
