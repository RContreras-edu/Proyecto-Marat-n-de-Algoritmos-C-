#include <iostream>
using namespace std;

int main() {
    unsigned long long n;
    cout << "Ingrese entero no negativo: ";
    if (!(cin >> n)) return 0;

    unsigned long long lo = 0, hi = n, mid, ans = 0;
    while (lo <= hi) {
        mid = lo + (hi - lo) / 2;
        unsigned long long sq = mid * mid;
        if (sq == n) { ans = mid; break; }
        if (sq < n) { ans = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    cout << "Raiz entera (floor) = " << ans << endl;
    return 0;
}
