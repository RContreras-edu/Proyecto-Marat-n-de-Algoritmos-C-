#include <iostream>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una palabra o frase: ";
    getline(cin, texto);
    cout << "Invertida: ";
    for(int i = texto.size() - 1; i >= 0; i--)
        cout << texto[i];
    return 0;
}
