#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double x1a, y1a, x2a, y2a;
    double x1b, y1b, x2b, y2b;
    cout << "Ingrese rectangulo A (x1 y1 x2 y2): ";
    cin >> x1a >> y1a >> x2a >> y2a;
    cout << "Ingrese rectangulo B (x1 y1 x2 y2): ";
    cin >> x1b >> y1b >> x2b >> y2b;
    double ax1 = min(x1a, x2a), ax2 = max(x1a, x2a);
    double ay1 = min(y1a, y2a), ay2 = max(y1a, y2a);
    double bx1 = min(x1b, x2b), bx2 = max(x1b, x2b);
    double by1 = min(y1b, y2b), by2 = max(y1b, y2b);

    bool noOverlap = (ax2 <= bx1) || (bx2 <= ax1) || (ay2 <= by1) || (by2 <= ay1);
    if (noOverlap) cout << "No se solapan.\n";
    else cout << "Se solapan.\n";
    return 0;
}
