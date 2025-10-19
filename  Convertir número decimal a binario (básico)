#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número decimal: ";
    cin >> n;
    int bin[32], i = 0;
    while(n > 0) {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }
    cout << "Número binario: ";
    for(int j = i-1; j >= 0; j--)
        cout << bin[j];
    cout << endl;
    return 0;
}
