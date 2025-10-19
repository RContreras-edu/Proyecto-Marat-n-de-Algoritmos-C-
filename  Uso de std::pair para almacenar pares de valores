#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de personas: ";
    cin >> n;

    vector<pair<string,int>> personas;
    string nombre;
    int edad;

    for (int i = 0; i < n; ++i) {
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Edad: ";
        cin >> edad;
        personas.push_back(make_pair(nombre, edad));
    }

    cout << "Personas ingresadas:\n";
    for (auto &p : personas)
        cout << p.first << " tiene " << p.second << " años.\n";

    return 0;
}
