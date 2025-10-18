#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string hexNum;
    int decimal;

    cout << "Ingrese un numero hexadecimal: ";
    cin >> hexNum;

    stringstream ss;
    ss << hex << hexNum;
    ss >> decimal;

    cout << "En decimal: " << decimal << endl;
    return 0;
}
