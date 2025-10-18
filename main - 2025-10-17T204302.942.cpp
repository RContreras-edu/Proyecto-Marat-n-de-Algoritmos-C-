#include <iostream>
using namespace std;

int main() {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    if(letra >= 'A' && letra <= 'Z')
        cout << "Es mayuscula";
    else if(letra >= 'a' && letra <= 'z')
        cout << "Es minuscula";
    else
        cout << "No es una letra";
    return 0;
}
