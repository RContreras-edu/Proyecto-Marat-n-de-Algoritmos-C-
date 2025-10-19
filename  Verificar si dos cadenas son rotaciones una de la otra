#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cout << "Ingrese la primera cadena: ";
    getline(cin, A);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, B);

    if (A.size() != B.size()) { cout << "No son rotaciones (distinta longitud).\n"; return 0; }
    string AA = A + A;
    if (AA.find(B) != string::npos) cout << "B es una rotacion de A.\n";
    else cout << "No son rotaciones.\n";
    return 0;
}
