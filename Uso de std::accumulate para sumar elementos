#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n;
    cout << "Cantidad números: ";
    cin >> n;
    vector<int> vec(n);

    cout << "Ingrese números:\n";
    for (int &x : vec) cin >> x;

    int suma = accumulate(vec.begin(), vec.end(), 0);
    cout << "Suma total: " << suma << endl;

    return 0;
}
