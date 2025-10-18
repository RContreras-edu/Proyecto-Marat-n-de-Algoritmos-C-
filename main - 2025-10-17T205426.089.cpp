#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese N (>=2): ";
    cin >> N;
    if (N < 2) { cout << "Cantidad de primos: 0\n"; return 0; }

    vector<char> isPrime(N+1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int p = 2; p * p <= N; ++p) {
        if (isPrime[p]) {
            for (int m = p * p; m <= N; m += p) isPrime[m] = 0;
        }
    }
    int contador = 0;
    for (int i = 2; i <= N; ++i) if (isPrime[i]) ++contador;
    cout << "Cantidad de primos hasta " << N << " = " << contador << endl;
    return 0;
}
