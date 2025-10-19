#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string h1, h2;
    int n1, n2;

    cout << "Ingrese primer numero hexadecimal: ";
    cin >> h1;
    cout << "Ingrese segundo numero hexadecimal: ";
    cin >> h2;

    stringstream(h1) >> hex >> n1;
    stringstream(h2) >> hex >> n2;

    int producto = n1 * n2;
    cout << "Producto en hexadecimal: " << hex << producto << endl;

    return 0;
}
