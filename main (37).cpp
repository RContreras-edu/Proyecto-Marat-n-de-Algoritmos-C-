#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string texto;
    int vocales = 0, consonantes = 0;
    cout << "Ingrese una frase: ";
    getline(cin, texto);

    for(char c : texto) {
        c = tolower(c);
        if(isalpha(c)) {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vocales++;
            else
                consonantes++;
        }
    }
    cout << "Vocales: " << vocales << "\nConsonantes: " << consonantes << endl;
    return 0;
}
