#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    if (n <= 0) {
        cout << "No es potencia de dos" << endl;
    } else if ((n & (n - 1)) == 0) {
        cout << "Es potencia de dos" << endl;
    } else {
        cout << "No es potencia de dos" << endl;
    }

    return 0;
}
