#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingresa un número: ";
    cin >> N;

    for (int i = 1; i <= N; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
