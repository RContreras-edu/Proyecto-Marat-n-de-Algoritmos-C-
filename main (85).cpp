#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;

    for(int i = N; i >= 1; i--){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
