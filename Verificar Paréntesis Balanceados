#include <iostream>
#include <stack>
using namespace std;

bool estaBalanceado(string expr) {
    stack<char> pila;
    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') {
            pila.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (pila.empty()) return false;
            char top = pila.top();
            pila.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return pila.empty();
}

int main() {
    string expr;
    cout << "Ingrese la expresión: ";
    cin >> expr;

    if (estaBalanceado(expr))
        cout << "Paréntesis balanceados." << endl;
    else
        cout << "Paréntesis no balanceados." << endl;

    return 0;
}
