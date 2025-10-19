#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de valores: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<double> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());
    double med;
    if (n % 2 == 1) med = a[n/2];
    else med = (a[n/2 - 1] + a[n/2]) / 2.0;

    cout << "Mediana: " << med << endl;
    return 0;
}
