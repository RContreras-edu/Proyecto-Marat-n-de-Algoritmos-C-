#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N;
    cout << "Ingrese cantidad de lanzamientos: ";
    cin >> N;
    if (N <= 0) return 0;

    srand((unsigned)time(nullptr));
    int caras = 0;
    for (int i = 0; i < N; ++i) {
        int r = rand() % 2; // 0 o 1
        if (r == 1) ++caras;
    }
    int cruces = N - caras;
    cout << "Caras: " << caras << " (" << (double)caras/N*100 << "%)\n";
    cout << "Cruz: " << cruces << " (" << (double)cruces/N*100 << "%)\n";
    return 0;
}
