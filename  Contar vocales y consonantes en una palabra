#include <iostream>
using namespace std;

int main() {
    string palabra;
    int vocales = 0, consonantes = 0;

    cout << "Ingresa una palabra: ";
    cin >> palabra;

    for (char c : palabra) {
        c = tolower(c);
        if (isalpha(c)) {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vocales++;
            else
                consonantes++;
        }
    }

    cout << "Vocales: " << vocales << ", Consonantes: " << consonantes << endl;
    return 0;
}
