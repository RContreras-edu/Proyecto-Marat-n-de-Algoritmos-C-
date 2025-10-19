#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cout << "Ingrese cadena A: ";
    getline(cin, A);
    cout << "Ingrese cadena B: ";
    getline(cin, B);
    if (A.size() != B.size()) { cout << "Cadenas de distinta longitud.\n"; return 0; }
    int dist = 0;
    for (size_t i = 0; i < A.size(); ++i) if (A[i] != B[i]) ++dist;
    cout << "Distancia de Hamming = " << dist << endl;
    return 0;
}
