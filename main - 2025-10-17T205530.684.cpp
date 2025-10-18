#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese grado n (>=0): ";
    cin >> n;
    if (n < 0) return 0;
    vector<double> a(n+1);
    cout << "Ingrese coeficientes a0 a1 ... an: ";
    for (int i = 0; i <= n; ++i) cin >> a[i];
    double x;
    cout << "Ingrese x: ";
    cin >> x;
    // Horner: compute from an down to a0
    double res = a[n];
    for (int i = n-1; i >= 0; --i) res = res * x + a[i];
    cout << "P(" << x << ") = " << res << endl;
    return 0;
}
