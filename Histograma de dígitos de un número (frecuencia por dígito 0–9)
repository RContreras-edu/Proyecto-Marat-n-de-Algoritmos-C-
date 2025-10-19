#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned long long n;
    cout << "Ingrese numero entero no negativo: ";
    cin >> n;

    vector<int> freq(10, 0);
    if (n == 0) freq[0] = 1;
    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }

    cout << "Frecuencias de digitos:\n";
    for (int d = 0; d <= 9; ++d)
        cout << d << ": " << freq[d] << "\n";
    return 0;
}
