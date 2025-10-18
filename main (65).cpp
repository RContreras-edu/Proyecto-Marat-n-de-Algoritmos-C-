#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese cantidad de números pares: ";
    cin >> N;
    for(int i=1; i<=N; i++)
        cout << i*2 << " ";
    cout << endl;
    return 0;
}
