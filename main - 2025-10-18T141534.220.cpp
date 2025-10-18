#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de palabras: ";
    cin >> n;
    map<string, int> contador;
    string palabra;

    cout << "Ingrese palabras:\n";
    for (int i = 0; i < n; ++i) {
        cin >> palabra;
        contador[palabra]++;
    }

    cout << "Frecuencias:\n";
    for (auto &p : contador)
        cout << p.first << ": " << p.second << endl;

    return 0;
}
