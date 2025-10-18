#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese N (cantidad de triangulares): ";
    cin >> N;
    for (int k = 1; k <= N; ++k) {
        long long Tk = (long long)k * (k + 1) / 2;
        cout << "T_" << k << " = " << Tk << endl;
    }
    return 0;
}
