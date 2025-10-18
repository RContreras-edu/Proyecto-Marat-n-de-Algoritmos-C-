#include <iostream>
using namespace std;

int main() {
    double metros;
    cout << "Ingrese los metros: ";
    cin >> metros;

    double km = metros / 1000;
    double cm = metros * 100;

    cout << metros << " metros son " << km << " kilometros y " << cm << " centimetros." << endl;
    return 0;
}

