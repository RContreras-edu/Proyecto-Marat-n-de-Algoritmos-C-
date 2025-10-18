#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool estaBalanceado(string expr) {
    stack<char> s;
    for (char c : expr) {
        if (c == '(') s.push(c);
        else if (c == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string expresion;
    cout << "Ingrese expresión: ";
    cin >> expresion;

    if (estaBalanceado(expresion))
        cout << "Paréntesis balanceados." << endl;
    else
        cout << "Paréntesis no balanceados." << endl;

    return 0;
}

