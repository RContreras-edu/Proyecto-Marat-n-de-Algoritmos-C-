#include <iostream>
#include <stack>
using namespace std;

int main() {
    int num;
    stack<int> binario;

    cout << "Ingrese un número decimal: ";
    cin >> num;

    int original = num;
    if (num == 0) binario.push(0);
    while (num > 0) {
        binario.push(num % 2);
        num /= 2;
    }

    cout << "Binario de " << original << ": ";
    while (!binario.empty()) {
        cout << binario.top();
        binario.pop();
    }
    cout << endl;
    return 0;
}

