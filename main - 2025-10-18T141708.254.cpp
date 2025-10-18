#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, num;
    cout << "Cantidad de números: ";
    cin >> n;

    unordered_map<int,int> freq;
    cout << "Ingrese números:\n";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        freq[num]++;
    }

    cout << "Frecuencia:\n";
    for (auto &p : freq)
        cout << p.first << ": " << p.second << endl;

    return 0;
}
