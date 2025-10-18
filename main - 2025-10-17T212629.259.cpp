#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa un número: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0)
        cout << num << " es divisible entre 3 y 5." << endl;
    else
        cout << num << " no es divisible entre 3 y 5." << endl;

    return 0;
}
