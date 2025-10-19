#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    int suma_cuad = accumulate(vec.begin(), vec.end(), 0, [](int acc, int x){
        return acc + x*x;
    });

    cout << "Suma de cuadrados: " << suma_cuad << endl;

    return 0;
}

