#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cout << "Ingrese binario A: ";
    cin >> a;
    cout << "Ingrese binario B: ";
    cin >> b;
    // validar
    for (char c : a) if (c != '0' && c != '1') { cout << "A invalido\n"; return 0; }
    for (char c : b) if (c != '0' && c != '1') { cout << "B invalido\n"; return 0; }

    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    string res;
    while (i >= 0 || j >= 0 || carry) {
        int bitA = (i >= 0) ? (a[i]-'0') : 0;
        int bitB = (j >= 0) ? (b[j]-'0') : 0;
        int sum = bitA + bitB + carry;
        res.push_back(char('0' + (sum % 2)));
        carry = sum / 2;
        --i; --j;
    }
    reverse(res.begin(), res.end());
    cout << "Suma binaria: " << res << endl;
    return 0;
}
