#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Ingrese numero (posible tarjeta, puede incluir espacios): ";
    getline(cin, s);
    string digits;
    for (char c : s) if (isdigit((unsigned char)c)) digits.push_back(c);
    if (digits.empty()) { cout << "Sin digitos.\n"; return 0; }
    int sum = 0;
    bool alt = false;
    for (int i = (int)digits.size() - 1; i >= 0; --i) {
        int d = digits[i] - '0';
        if (alt) {
            d *= 2;
            if (d > 9) d -= 9;
        }
        sum += d;
        alt = !alt;
    }
    cout << (sum % 10 == 0 ? "Valido (Luhn).\n" : "Invalido (Luhn).\n");
    return 0;
}
