#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese elementos:\n";
    for (int &x : vec) cin >> x;

    int suma = accumulate(vec.begin(), vec.end(), 0);

    cout << "La suma total es: " << suma << endl;

    return 0;
}
