#include <iostream>
using namespace std;

int main() {
    char letra;
    cout << "Ingrese letra minúscula: ";
    cin >> letra;
    char mayus = letra - 32;
    cout << "Letra mayúscula: " << mayus << endl;
    return 0;
}
