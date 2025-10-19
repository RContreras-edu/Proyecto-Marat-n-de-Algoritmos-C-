#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned long long n;
    cout << "Ingrese numero decimal no negativo: ";
    cin >> n;
    if (n == 0) { cout << "Hex: 0\n"; return 0; }
    string hex = "";
    const char *tbl = "0123456789ABCDEF";
    while (n > 0) {
        int d = n % 16;
        hex.push_back(tbl[d]);
        n /= 16;
    }
    reverse(hex.begin(), hex.end());
    cout << "Hex: " << hex << endl;
    return 0;
}
