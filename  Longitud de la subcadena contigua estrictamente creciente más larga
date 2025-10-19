#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    if (n <= 0) { cout << "0\n"; return 0; }
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int best = 1, curr = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i-1]) ++curr;
        else { if (curr > best) best = curr; curr = 1; }
    }
    if (curr > best) best = curr;
    cout << "Longitud maxima subcadena estrictamente creciente: " << best << endl;
    return 0;
}
